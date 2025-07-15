#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    string t,u;
    cin>>t>>u;
    int size=t.size()-u.size()+1;
    bool flg=false;
    rep(i,size){
        string s=t.substr(i,u.size());
        rep(j,s.size()){
            if(s.at(j)=='?')s.at(j)=u.at(j);
        }
        if(s==u)flg=true;
    }    
    if(flg)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}