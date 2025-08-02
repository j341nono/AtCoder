#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n,q;
    cin>>n>>q;
    int offset=0;
    rep(i,q){
        int type;
        cin>>type;
        vector<int>a(n);
        rep(j,n)a.at(j)=j+1;
        if(type==1){
            int p,x;
            cin>>p>>x;
            p--;
            offset=(offset+p)%n;
            a.at(offset)=x;
        }
        else if(type==2){
            int p;
            cin>>p;
            p--;
            offset=(offset+p)%n;
            cout<<a.at(offset)<<"\n";
        }
        else{
            int k;
            cin>>k;
            k--;
            offset=(offset+k)%n;
        }
    }
}