#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n,m;
    cin>>n>>m;
    vector<string> S(n);
    rep(i, n) cin >> S[i];
    vector<int> score(n,0);
    rep(j,m) {
        int x=0;
        int y=0;
        rep(i,n) {
            if(S[i][j]=='0')x++;
            else y++;
        }
        if(x== 0||y==0){
            rep(i,n) score[i]++;
        }else if (x<y){
            rep(i,n)if(S[i][j]=='0')score[i]++;
        }else{
            rep(i,n)if(S[i][j]=='1')score[i]++;
        }
    }
    int mx=*max_element(score.begin(),score.end());
    bool first=true;
    rep(i,n) {
        if(score[i]==mx) {
            if(!first)cout<<" ";
            cout<<(i+1);
            first=false;
        }
    }
    cout<<"\n";
}