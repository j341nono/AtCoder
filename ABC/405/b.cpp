#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    rep(i,n)cin>>a.at(i);
    bool flg=true;
    rep(i,m){
        if(i==0)continue;
        if(find(a.begin(),a.end(),i)==a.end())flg=false;
    }
    if(!flg){
        cout<<0<<endl;
        return 0;
    }
    int cnt=0;
    for(int i=n-1;i>=0;i--){
        int now=a.at(i);
        a.pop_back();
        cnt++;
        if(find(a.begin(),a.end(),now)==a.end())break;
    }
    cout<<cnt<<endl;
}