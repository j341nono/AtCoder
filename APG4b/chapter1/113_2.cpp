#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n,m;
    cin>>n>>m;
    vector<int> brid(n,0);
    rep(i,m){
        int a,b;
        cin>>a>>b;
        brid.at(a-1)++;
        brid.at(b-1)++;
    }
    rep(i,n)cout<<brid.at(i)<<endl;
}
