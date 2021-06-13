#include "myutils.hpp"


constexpr ushort QUEENNUM = 8;
vector<vector<ushort>> NQueens(ushort n);

int main(int argc, char const *argv[])
{
    auto a = NQueens(QUEENNUM);
    vector<Matrix<char>> ans;
    ushort n = 0;
    for (const auto i: a)
    {
        ushort k = 0;
        Matrix<char> m(QUEENNUM, QUEENNUM, '.');
        for (auto j: i)
        {
            m[k++][j] = 'Q';
        }
        cout << "Answer " << n++ << ": " << endl;
        m.PrettyPrint(2);
        cout << endl;
    }
    return 0;
}

bool Place(int k, int i, const vector<ushort>& x)
{
    for (auto j = 0; j < k; j++)
    {
        if (x.at(j) == i || abs(x.at(j) - i) == abs(j - k)) return false;
    }
    return true;
}

void NQueens(vector<vector<ushort>>& ans, ushort k, ushort n, vector<ushort>& x)
{
    for (int i = 0; i < n; i++)
    {
        if(Place(k, i, x))
        {
            x[k] = i;
            if (k == n - 1)
            {
                ans.emplace_back(vector<ushort>());
                for (i = 0; i < n; i++)
                {
                    ans.back().emplace_back(x[i]);
                }
            }
            else
            {
                NQueens(ans, k + 1, n, x);
            }
        }
    }
}

vector<vector<ushort>> NQueens(ushort n)
{
    vector<vector<ushort>> ans;
    vector<ushort> x;
    x.resize(n);
    NQueens(ans, 0, n, x);
    return ans;
}