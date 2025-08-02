#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    rep(i,n)cin>>a.at(i);
    vector<int>b(m);
    rep(i,m)cin>>b.at(i);
    map<int,int>bc;
    for(int x:b) bc[x]++;
    vector<int>ans;
    for(int x:a){
        if(bc[x]>0){
            bc[x]--;
        }else{
            ans.push_back(x);
        }
    }
    rep(i,ans.size())cout<<ans.at(i)<<" ";
    cout<<endl;
}