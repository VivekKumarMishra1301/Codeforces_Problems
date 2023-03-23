#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void precal()
{
}
void solve()
{
    int sz;
    cin>>sz;
   map<int,int>right;
   map<int,int>left;
   vector<int>a1(sz);
   vector<int>b1(sz);
   for(int i=0;i<sz;i++){
       cin>>a1[i];
       if(i!=0)
       right[a1[i]]++;
   }
   left[a1[0]]++;
   for(int i=0;i<sz;i++){
       cin>>b1[i];
    //   right[b1[i]]++;
   }
  
  bool flag=true;
  for(int i=1;i<sz;i++){
    //   if(right.find(a1[i])!=right.end()&&right[a1[i]]!=0){
          right[a1[i]]--;
    //   }
      if(b1[i]==0){
          if(a1[i]==0&&(right.find(0)==right.end()||left.find(0)==left.end()||right[0]<1||left[0]<1)){
              flag=false;
              break;
          }else if(a1[i]==1){
              flag=false;
              break;
          }
      }else{
          if(a1[i]==0&&((right.find(1)==right.end()||right[1]<1)&&(left.find(1)==left.end()||left[1]<1))){
              flag=false;
              break;
          }
      }
      left[a1[i]]++;
      
  }
  if(flag){
      cout<<"YES"<<endl;
  }else{
      cout<<"NO"<<endl;
  }
    
    
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    // precal();
    int t = 1;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
}