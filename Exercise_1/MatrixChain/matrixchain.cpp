#include"myutils.hpp"

pair<Matrix<int>, Matrix<int>> MChain(const vector<int>&);
pair<Matrix<int>, Matrix<int>> LookupChian(const vector<int>&);
string TraceBack(const Matrix<int>& s);

int main(int argc, char const *argv[])
{
    vector data = {30, 35, 15, 5, 10, 20, 25};
    auto a = MChain(data);
    cout << "Matrix m by MChain: " << endl;
    a.first.PrettyPrint();

    cout << "Minimum times number by MChain: " << endl;
    cout << a.first[0][data.size() - 2] << endl;
    
    cout << "Matrix s by MChain: " << endl;
    a.second.PrettyPrint();
    
    auto b = LookupChian(data);
    auto s = TraceBack(b.second);
    cout << "Fully parenthesized by MChain: " << endl << s << endl;

    cout << endl;
    cout << "==============================================" << endl;
    cout << endl;

    cout << "Matrix m by LookupChain: " << endl;
    b.first.PrettyPrint();

    cout << "Minimum times number by LookupChain: " << endl;
    cout << b.first[0][data.size() - 2] << endl;
    
    cout << "Matrix s by LookupChain: " << endl;
    b.second.PrettyPrint();
    
    cout << "Fully parenthesized by LookupChain: " << endl << s << endl;

    
    return 0;
}

pair<Matrix<int>, Matrix<int>> MChain(const vector<int>& p)
{
    auto n = p.size();
    auto d = n - 1;
    Matrix<int> m(d, d);
    Matrix<int> s(d, d);
    for (auto r = 2; r < n; r++)
    {
        for (auto i = 0; i < n - r; i++)
        {
            int j = i + r - 1;
            m[i][j] = m[i + 1][j] + p[i] * p[i + 1] * p[j + 1];
            s[i][j] = i;
            for (auto k = i + 1; k < j; k++)
            {
                int t = m[i][k] + m[k + 1][j] + p[i] * p[k + 1] * p[j + 1];
                if (t < m[i][j])
                {
                    m[i][j] = t; 
                    s[i][j] = k;
                }
            }
        }
    }
    // m.PrettyPrint();
    // s.PrettyPrint();
    return pair(m, s);
}

void TraceBack(const Matrix<int>& s, int i, int j, string& ret)
{
    if (i == j) {
        ret += 'A'; 
        ret += i + '0';
        return;
    }
    if (i < s[i][j]) ret += '(';
    TraceBack(s, i, s[i][j], ret);
    if (i < s[i][j]) ret += ')';
    if (s[i][j] + 1 < j) ret += '(';
    TraceBack(s, s[i][j] + 1, j, ret);
    if (s[i][j] + 1 < j) ret += ')';
}

string TraceBack(const Matrix<int>& s)
{
    string ret;
    auto n = s[0].size();
    ret += '(';
    TraceBack(s, 0, n - 1, ret);
    ret += ')';
    return ret;
}
int LookupChian(const vector<int>& p, Matrix<int>& m, Matrix<int>& s, std::size_t i, std::size_t j)
{
    if (m[i][j] > 0) return m[i][j];
    if (i == j) return 0;
    int u = LookupChian(p, m, s, i + 1, j) + p[i] * p[i + 1] * p[j + 1];
    s[i][j] = i;
    for (int k = i + 1; k < j; k++)
    {
        int t = LookupChian(p, m, s, i, k) + LookupChian(p, m, s, k + 1, j) + p[i] * p[k + 1] * p[j + 1];
        if (t < u)
        {
            u = t;
            s[i][j] = k;
        }
    }
    m[i][j] = u; 
    return u;
}
pair<Matrix<int>, Matrix<int>> LookupChian(const vector<int>& p)
{
    auto length = p.size();
    Matrix<int> m(length - 1, length - 1);
    Matrix<int> s(length - 1, length - 1);
    LookupChian(p, m, s, 0, length - 2);
    return pair(m, s);
}