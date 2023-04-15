#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
using namespace std;
void precal()
{
}

bool check(int curr,int tar,int &m,vector<int>&hold,vector<int>&dp){
    if(curr==tar){
        return true;
    }
    if(curr<0||curr>tar||m>=40){
        return false;
    }

    if(dp[curr]!-1){
        return dp[curr];
    }

    hold.push_back(2);
    m++;
    if(check(curr*2+1,tar,m,hold,dp)){
        return dp[curr]=true;
    }
    
    hold.pop_back();
    hold.push_back(1);
    if(check(curr*2-1,tar,m,hold,dp)){
        return dp[curr]=true;
    }
    hold.pop_back();
    m--;
    return dp[cur]=false;

}


void solve()
{
    long tar;
    cin>>tar;
    vector<int>hold;
    vector<int>dp(tar+1,-1);
    if(tar==2){
        cout<<-1<<endl;return;
    }
    int m=0;
    if(check(1,tar,m,hold,dp)){
        cout<<m<<endl;
        for(int i=0;i<hold.size();i++){
                cout<<hold[i]<<" ";
        }
        cout<<endl;
    }else{
        cout<<-1<<endl;
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