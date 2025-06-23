#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int h,w;
    cin>>h>>w;
    vector<string> c(h);
    rep(i,h){
        string s;
        cin>>s;
        c.at(i)=s;
    }
    rep(i,h+2){
        if(i==0||i==h+1){
            rep(i,w+2)cout<<'#';
        }
        else{
            rep(j,3){
                if(j==1)cout<<c.at(i-1);
                else cout<<'#';
            }
        }
        cout<<endl;
    }
}
