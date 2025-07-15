#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll=long long;

int main(){
    int n;
    cin>>n;
    string s="";
    ll total=0;
    rep(i,n){
        char c;
        ll l;
        cin>>c>>l;
        if(l>100||total>100||total+l>100){
            cout<<"Too Long"<<endl;
            return 0;
        }
        total+=l;
        rep(j,l)s.push_back(c);
    }
    cout<<s<<endl;
}   