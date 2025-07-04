#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n,s;
    cin>>n>>s;
    vector<int> t(n);
    rep(i,n)cin>>t.at(i);
    bool flg=false;
    if(t.at(0)>=s+0.5)flg=true;
    rep(i,n-1){
        if(t.at(i+1)-t.at(i)>=s+0.5){
            flg=true;
            break;
        }
    }
    if(flg)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
