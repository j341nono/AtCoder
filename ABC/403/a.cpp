#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin>>n;
    int s=0;
    rep(i,n){
        int b;
        cin>>b;
        if(i%2==1)continue;
        s+=b;
    }
    cout<<s<<endl;
}