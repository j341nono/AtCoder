#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int t;
    cin>>t;
    rep(i,t){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int num=1;
        rep(j,n)num*=2;
        num--;
        vector<bool> safe(num+1,false);
        for(int j=1;j<=num;++j){
            if(s.at(j-1)=='0')safe.at(j)=true;
        }
        vector<bool> dp(num+1,false);
        dp.at(0)=true;
        rep(j,num+1){
            if(dp.at(j)==false)continue;
            rep(k,n){
                int j2=j|(1<<k);
                if(safe.at(j2))dp.at(j2)=true;
            }
        }
        if(dp.at(num))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}