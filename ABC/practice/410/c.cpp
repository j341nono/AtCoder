#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    rep(i,n)a.at(i)=i+1;
    int offset=0;
    rep(i,q){
        int type;
        cin>>type;
        if(type==1){
            int p,x;
            cin>>p>>x;
            p--;
            a.at((p+offset)%n)=x;
        }
        else if(type==2){
            int p;
            cin>>p;
            p--;
            cout<<a.at((p+offset)%n)<<"\n";
        }
        else if(type==3){
            int k;
            cin>>k;
            offset+=k;
            offset%=n;
        }
    }
}