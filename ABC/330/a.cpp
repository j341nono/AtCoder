#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n,l;
    cin>>n>>l;
    int cnt=0;
    rep(i,n){
        int a;
        cin>>a;
        if(a>=l)cnt++;
    }
    cout<<cnt<<endl;
}