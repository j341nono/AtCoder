#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    string s;
    cin>>n>>s;
    vector<int> cnt(26,0);
    char now,pre;
    int c=0;
    if(s.size()==1){
        cout<<1<<endl;
        return 0;
    }
    rep(i,n){
        now=s.at(i);
        if(i==0){
            pre=now;
            c++;
            continue;
        }
        if(now==pre)c++;
        else{
            int pre_i=pre-'a';
            if(cnt.at(pre_i)<c){
                cnt.at(pre_i)=c;
            }
            c=1;
            pre=now;
        }
    }
    int last_idx=now-'a';
    if(cnt.at(last_idx)<c){
        cnt.at(last_idx)=c;
    }
    int ans=0;
    rep(i,26){
        if(cnt.at(i)>0){
            ans+=cnt.at(i);
        }
    }
    cout<<ans<<endl;
}



/*
更新後の条件を見ていて，更新前ではなく更新後の文字を見てしまっていた．
更新した場合，c=1 で始めなければならなかった
最後の連続文字に関して，比較しなければならない

*/