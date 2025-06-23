#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin>>n;
    bool yel=false;
    rep(i,n){
        string s;
        cin>>s;
        if(s=="Y"){
            yel=true;
            break;
        }
    }
    if(yel)cout<<"Four"<<endl;
    else cout<<"Three"<<endl;
}