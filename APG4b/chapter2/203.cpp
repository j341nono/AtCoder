#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int h,w;
    cin>>h>>w;
    vector<vector<char> > a(h,vector<char>(w));
    rep(i,h){
        rep(j,w)cin>>a.at(i).at(j);
    }
    vector<bool> H(h,false);
    vector<bool> W(w,false);
    rep(i,h){
        rep(j,w){
            if(a.at(i).at(j)=='#'){
                H.at(i)=true;
                W.at(j)=true;
            }
        }
    }
    rep(i,h){
        if(H.at(i)){
            rep(j,w){
                if(W.at(j))cout<<a.at(i).at(j);
            }
            cout<<endl;
        }
    }
}
