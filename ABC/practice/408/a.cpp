#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    rep(i,n)cin>>a.at(i);
    int k;
    cin>>k;
    int ans=0;
    rep(i,n){
        if(k<=a.at(i))ans++;
    }
    cout<<ans<<endl;
}