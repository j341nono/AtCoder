#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n,m;
    cin>>n>>m;
    int s=0;
    rep(i,n){
        int now;
        cin>>now;
        s+=now;
    }
    if(s<=m)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

    /*
    cin>>n,m; になっていた
    */