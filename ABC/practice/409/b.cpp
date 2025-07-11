#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a.at(i);
    int now=0;
    rep(i,n){
        now=i;
        int cnt=0;
        rep(j,a.size())if(a.at(j)>=now)cnt++;
        if(cnt<now)break;
    }
    now--;
    cout<<now<<endl;
}