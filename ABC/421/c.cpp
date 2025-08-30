#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll=long long;

int main(){
    int n;
    string s;
    cin>>n>>s;
    vector<int> Apos;
    rep(i,2*n)if(s[i]=='A')Apos.push_back(i);
    ll c1=0,c2=0;
    rep(i,n){
        c1+=abs(Apos[i]-2*i);
        c2+=abs(Apos[i]-(2*i+1));
    }
    cout<<min(c1,c2)<<endl;
}