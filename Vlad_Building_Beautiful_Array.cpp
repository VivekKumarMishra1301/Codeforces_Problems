#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
using namespace std;
void precal()
{
}
void solve()
{
    long sz;
    cin >> sz;
    vector<long> e;
    vector<long> o;
    vector<long> inp;
    for (int i = 0; i < sz; i++)
    {
        long n;
        cin >> n;
        inp.push_back(n);
        if (n % 2 == 0)
        {
            e.push_back(n);
        }
        else
        {
            o.push_back(n);
        }
    }

    sort(o.begin(), o.end());
    sort(e.begin(), e.end());
    vector<long> phla;
    vector<long> dusra;
    for (int i = 0; i < sz; i++)
    {
        long nu = *lower_bound(o.begin(), o.end(), inp[i]);
        long nt = *lower_bound(e.begin(), e.end(), inp[i]);
        if (inp[i] - nu > 0 && (inp[i] - nu) % 2 == 0)
        {
            phla.push_back(1);
        }
        else if (inp[i] - nu > 0)
        {
            dusra.push_back(1);
        }

        if (inp[i] - nt > 0 && (inp[i] - nt) % 2 == 0)
        {
            phla.push_back(1);
        }
        else if (inp[i] - nu > 0)
        {
            dusra.push_back(1);
        }
    }
    if (phla.size() == sz || dusra.size() == sz)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    precal();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
}
