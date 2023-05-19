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
    int k;
    cin >> k;
    vector<long> phla(sz);
    vector<long> dusra(sz);
    for (int i = 0; i < sz; i++)
    {
        cin >> phla[i];
    }
    for (int i = 0; i < sz; i++)
    {
        cin >> dusra[i];
    }
    vector<long> naya = phla;
    map<int, vector<int>> meraMap;
    sort(phla.begin(), phla.end());
    sort(dusra.begin(), dusra.end());
    for (int i = 0; i < sz; i++)
    {
        meraMap[phla[i]].push_back(dusra[i]);
    }
    for (int i = 0; i < sz; i++)
    {
        auto it = meraMap.find(naya[i]);
        cout << it->second[it->second.size() - 1] << " ";
        it.second->pop_back();
    }
    cout << endl;
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
