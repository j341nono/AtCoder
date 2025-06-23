#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)

using ll=long long;

int main(){
    int n,k;
    cin>>n>>k;
    ll x=1;
    rep(i,k) x*=10;
    ll s=1;
    rep(i,n){
        int a;
        cin>>a;
        if (s>(x-1)/a) s=1;
        else s*=a;
    }
    cout<<s<<endl; 
}