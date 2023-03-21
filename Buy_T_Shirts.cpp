#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    // cin>>t;
    // while(t--){
        int n;
        cin>>n;
        vector<int>price(n),front(n),back(n);
        for(int i=0;i<n;i++){
            cin>>price[i];
        }
         for(int i=0;i<n;i++){
            cin>>front[i];
        }
         for(int i=0;i<n;i++){
            cin>>back[i];
        }
       
        set<int>s[3];
        for(int i=0;i<n;i++){
            s[front[i]-1].insert(price[i]);
              s[back[i]-1].insert(price[i]);
            
        }
        int buyers;
        cin>>buyers;
        for(int i=0;i<buyers;i++){
            int col=0;
            int p=-1;
            cin>>col;
            p=*s[col-1].begin();
            for(int i=0;i<3;i++){
                s[i].erase(p);
            }
            if(p)
            cout<<p<<" ";
            else
            cout<<-1<<" ";
        }
    // }
}