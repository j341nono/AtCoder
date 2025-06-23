#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n,m;
    cin>>n;
    vector<string> a(n);
    rep(i,n)cin>>a.at(i);
    cin>>m;
    vector<string> b(m);
    rep(i,m)cin>>b.at(i);
    int ans=0;
    rep(i,n){
        int s=0;
        rep(ii,n)if(a.at(i)==a.at(ii))s++;
        rep(j,m)if(a.at(i)==b.at(j))s--;
        ans=max(ans,s);
    }
    cout<<ans<<endl;
}
