#include "myutils.hpp"

class Loading
{
private:
    vector<int> w, x, bx;
    int cw, bw, rw; //cw，当前集装箱货物重量；bw，最优载重重量，rw，剩余集装箱重量；
    int c1, c2, n;

public:
    Loading(int ship1, int ship2, const vector<int> &containers) : w(containers),
                                                                c1(ship1), c2(ship2), cw(0), bw(0), rw(0), n(w.size())
    {
        x.resize(n);
        bx.resize(n);
        for (auto i : w)
        {
            rw += i;
        }
    }
    void BackTrack(int i)
    {
        if (i >= n)
        {
            if (cw > bw)
            {
                bw = cw;
                for (int i = 0; i < n; i++)
                    bx[i] = x[i];
            }
            return;
        }
        rw -= w[i];

        if (cw + w[i] <= c1)
        {
            cw += w[i]; //加上
            x[i] = 1;   //标记i被选
            BackTrack(i + 1);
            cw -= w[i]; //减去重量
            x[i] = 0;   //撤销标记；
        }
        if (cw + rw > bw)
        {
            x[i] = 0;
            BackTrack(i + 1);
        }
        rw += w[i];
        return;
    }
    void operator()()
    {
        BackTrack(0);
        cout << "The First ship capacity: " << c1 << endl;
        cout << "The Second ship capacity: " << c2 << endl;
        cout << "Containers: " << endl;
        PrintVector(w);
        if (rw - bw > c2)
        {
            cout << "No Solution." << endl;
        }
        else
        {
            vector<int> ans;
            cout << endl;
            cout << "SOLUTION: " << endl;
            cout << "Containers on the First ship: " << endl;
            for (auto i = 0; i < n; i++)
            {
                if (bx[i]) ans.push_back(w[i]);
            }
            PrintVector(ans);
            cout << "Containers on the Second ship: " << endl;
            ans.clear();
            for (auto i = 0; i < n; i++)
            {
                if (!bx[i]) ans.push_back(w[i]);
            }
            PrintVector(ans);
        }
    }
};

int main()
{
    vector a{90, 80, 40, 30, 20, 12, 10};
    Loading loading(152, 130, a);
    loading();
    return 0;
}