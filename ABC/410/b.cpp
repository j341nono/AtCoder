#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)

int main(){
    int n,q;
    cin>>n>>q;
    vector<int> b(n,0);
    vector<int> ans(q);
    rep(i,q){
        int x;
        cin>>x;
        if(x>0){
            b.at(x-1)++;
            ans.at(i)=x;
        }else{
            int min=0;
            rep(j,n){
                if(b[j]<b.at(min))min=j;
            }
            b.at(min)++;
            ans.at(i)=min+1;
        }
    }
    rep(i,q)cout<<ans.at(i)<<" ";
    cout<<endl;
}