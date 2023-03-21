#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void precal()
{
}
void solve()
{
    long long n;
    cin>>n;
    vector<long long>q(n);
    for(int i=0;i<n;i++){
        cin>>q[i];
    }
    sort(q.begin(),q.end());
    long long satisfied=0;
    long long waiting=0;
    for(int i=0;i<n;i++){
        if(q[i]>=waiting){
            satisfied++;
            waiting+=q[i];
        }
    }
        cout<<satisfied;
    
    
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
    // cin>>t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
}