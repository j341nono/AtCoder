#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll=long long;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    rep(i,n)cin>>a.at(i);
    unordered_map<int,ll>cm;
    rep(i,n){
        int key=(i+1)+a.at(i);
        cm[key]++;
    }
    ll ans=0;
    rep(i,n){
        int key=i+1-a.at(i);
        if(cm.count(key))ans+=cm[key];
    }
    cout<<ans<<endl;
}