#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll=long long;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a.at(i);
    ll ans=0;ll sum=0;
    rep(i,n){
        ans+=(ll)sum*a.at(i);
        sum+=(ll)a.at(i);
    }
    cout<<ans<<endl;
}