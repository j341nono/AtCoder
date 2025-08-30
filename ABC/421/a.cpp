#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin>>n;
    vector<string>s(n);
    rep(i,n){
        cin>>s[i];
    }
    int x;
    string y;
    cin>>x>>y;
    if(s[x-1]==y)cout<<"Yes";
    else cout<<"No";
    cout<<endl;
}