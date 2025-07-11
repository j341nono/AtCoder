#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n,l;
    cin>>n>>l;
    vector<int> d(n);
    d.at(0)=0;
    rep(i,n-1){
        int di;
        cin>>di;
        d.at(i+1)=(d.at(i)+di)%l;
    }
    vector<int> cnt(n);
    rep(i,n)cnt.at((d.at(i)))++;
    if(l%3!=0){
        cout<<0<<endl;
        return 0;
    }
    int ans=0;
    int p=l/3;
    rep(i,n){
        int l1=d.at(i);
        int l2=(l1+p)/l;
        int l3=(l2+p)/l;
        ans+=cnt.at(l2)*cnt.at(l3);
    }
    ans/=3;
    cout<<ans<<endl;
}