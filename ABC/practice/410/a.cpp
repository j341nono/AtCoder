#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin>>n;
    int ans=0;
    vector<int> a(n);
    rep(i,n)cin>>a.at(i);
    int k;
    cin>>k;
    rep(i,n){
        if(k<=a.at(i))ans++;
    }
    cout<<ans<<endl;
}

/*
3:34
*/