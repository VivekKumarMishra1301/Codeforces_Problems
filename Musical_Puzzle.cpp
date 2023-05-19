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
    int sz;
    cin >> sz;
    string gana;
    cin >> gana;
    long cnt = 1;
    map<string, int> meraMap;
    for (int i = 1; i < sz; i++)
    {
        // string ns="";
        // ns+=gana[i];
        // ns+=gana[i+1];
        // string ps="";
        ps += gana[i - 1];
        ps += gana[i - 2];
        meraMap[ps]++;
        // if(ps==ns)
    }
    cout << meraMap.size() << endl;
    return;
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
