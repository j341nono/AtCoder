#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a.at(i);
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()), a.end());
    cout<<a.size()<<endl;
    rep(i,a.size())cout<<a.at(i)<<" ";
    cout<<endl;
}
