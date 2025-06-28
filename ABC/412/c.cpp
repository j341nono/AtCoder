#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)

int main(){
    int t;
    cin>>t;
    rep(zz,t){
        int n;
        cin>>n;
        vector<int> s(n);
        rep(i,n)cin>>s.at(i);
        int r=s.at(n);
        int min=100000;
        int re=s.at(0);
        int cnt=0;
        bool flg=false;
        rep(i,n-1){
            if(s.at(i)*2>=r){
                if(s.at(i)<min)min=s.at(i);
                cnt++;
                flg=true;
            }
        }
        if(flg==false){
            flg=true;
            cnt=0;
        }
        if(min==s.at(0)){
            cout<<cnt<<endl;
        }
        if(min==100000)cout<<-1<<endl;
    }
}
