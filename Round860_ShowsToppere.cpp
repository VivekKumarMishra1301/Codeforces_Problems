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
    int nap;
    cin>>nap;
    vector<int>phla(nap);
    vector<int>dusra(nap);
    for(int i=0;i<nap;i++){
        cin>>phla[i];

    }
    for(int i=0;i<nap;i++){
        cin>>dusra[i];
        
    }
    bool flag=true;
    for(int i=0;i<nap;i++) {
        if(i==0){
            if(phla[i]>dusra[i]){
                swap(phla[i],dusra[i]);
                continue;
            }
            if(phla[i]>dusra[i]&&dusra[i]>phla[i-1]){
                swap(phla[i],dusra[i]);
                continue;
            }
            if(phla[i]<dusra[i]&&phla[i]>dusra[i-1]){
                swap(phla[i],dusra[i]);
            }
        }


    }
int j1=*max_element(phla.begin(),phla.end());
int j2=*max_element(dusra.begin(),dusra.end());
if(j1==phla[nap-1]&&j2==dusra[nap-1]){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl
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
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
}