#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void precal()
{
}
void solve()
{

    int batti[4];
    map<int, int> meraMap;
    for (int i = 0; i < 4; i++)
    {

        cin >> batti[i];
        meraMap[batti[i]]++;
    }
    if (meraMap.size() == 4 || meraMap.size() == 3)
    {
        cout << 4 << endl;
    }
    else if (meraMap.size() == 2)
    {
        for (auto i : meraMap)
        {
            if (i.second == 2)
            {
                cout << 4 << endl;
                break;
            }
            else
            {
                cout << 6 << endl;
                break;
            }
        }
    }
    else
    {
        cout << -1 << endl;
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