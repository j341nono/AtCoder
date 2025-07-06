#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll=long long;

int main(){
    int n;
    cin>>n;
    vector<int> p(n);
    rep(i,n)cin>>p.at(i);
    vector<int> d(n-1);
    rep(i,n-1){
        if(p.at(i)<p.at(i+1))d.at(i)=1;
        else d.at(i)=0;
    }
    vector<pair<int,int>> rle;
    for(int x:d){
        if(rle.size()&&x==rle.back().first)rle.back().second++;
        else rle.emplace_back(x,1);
    }
    ll ans=0;
    for(int i=1;i<rle.size()-1;i++){
        if(rle.at(i).first==0){
            int l=0;int r=0;
            if(i>0)l=rle.at(i-1).second;
            if(i<rle.size())r=rle.at(i+1).second;
            ans+=(ll)l*r;
        }
    }
    cout<<ans<<endl;
}