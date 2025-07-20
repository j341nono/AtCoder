#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin>>n;
    string sb="logout";
    int ans=0;
    rep(i,n){
        string s;
        cin>>s;
        if(s=="login"){
            sb="login";
        }
        else if(s=="logout"&&sb=="login")sb="logout";
        else if(s=="public"){
            if(sb=="logout"){
                ans++;
                s="logout";
            }
            sb="public";
        }
        else if(s=="private"){
            if(sb=="logout")ans++;
            sb="private";
        }
        else sb=s;
    }
    cout<<ans<<endl;
}