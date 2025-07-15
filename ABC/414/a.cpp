#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n,l,r;
    cin>>n>>l>>r;
    int cnt=0;
    rep(i,n){
        int x,y;
        cin>>x>>y;
        if(x<=l&&r<=y)cnt++;
    }
    cout<<cnt<<endl;
}