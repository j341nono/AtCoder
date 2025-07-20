#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a.at(i);
    bool flg=false;
    int x;
    cin>>x;
    rep(i,n){
        if(a.at(i)==x)flg=true;
    }
    if(flg)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}