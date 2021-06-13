#include "myutils.hpp"


int constexpr MaxLen = 50;

// Longest common subseqence.
string LCS(const string& s1, const string& s2);

int main()
{
    string s1 = "abcbdab";
    string s2 = "bdcaba";
    cout << "Logest common subseqence of '" << s1 <<"' and '" << s2 << "' is " << endl;;
    cout << LCS(s1, s2) << endl;
    return 0;
}



void CLCS(int s[][MaxLen], const string& a, int i, int j, string& res)
{
    if(i == 0 || j == 0)
        return;
    if(s[i][j] == 1)
    {
        CLCS(s, a, i - 1, j - 1, res);
        res.push_back(a[i]);
    }
    else if(s[i][j] == 2)
        CLCS(s, a, i - 1, j, res);
    else  
        CLCS(s, a, i, j - 1, res);
}

string LCS(const string& s1, const string& s2)
{
    auto c = new int[MaxLen][MaxLen];
    auto s = new int[MaxLen][MaxLen];
    auto s1_ = s1; 
    auto s2_ = s2;
    auto m = s1.length();
    auto n = s2.length();
    s1_.insert(0, "0");
    s2_.insert(0, "0"); // End flag
    memset(c, 0, sizeof(c));  // Init
    memset(s, 0, sizeof(s));
    for(int i = 1; i <= m; i++) c[i][0] = 0;
    for(int j = 1; j <= n; j++) c[0][j] = 0;
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(s1_[i] == s2_[j])  // 由c[i-1][j-1]得到c[i][j]
            {
                c[i][j] = c[i - 1][j - 1] + 1;
                s[i][j] = 1;
            }
            else if(c[i - 1][j] >= c[i][j - 1])  // 由c[i-1][j]得到c[i][j]
            {
                c[i][j] = c[i - 1][j];
                s[i][j] = 2;
            }
            else  // 由c[i][j-1]得到c[i][j]
            {
                c[i][j] = c[i][j - 1];
                s[i][j] = 3;
            }
        }
    }
    string res;
    CLCS(s, s1_, m, n, res);
    delete []s;
    delete []c;
    return res;
    
}
