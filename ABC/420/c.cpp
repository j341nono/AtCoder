#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll=long long;

int main(){
    int n,q;
    cin>>n>>q;
    vector<ll>A(n),B(n);
    rep(i,n)cin>>A[i];
    rep(i,n)cin>>B[i];
    ll sum=0;
    rep(i,n)sum+=min(A[i],B[i]);
    while(q--){
        char c;
        int x;
        ll v;
        cin>>c>>x>>v;
        x--;
        sum-=min(A[x],B[x]);
        if(c=='A')A[x]=v;
        else B[x]=v;
        sum+=min(A[x],B[x]);
        cout<<sum<<"\n";
    }
}
