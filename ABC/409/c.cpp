#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n,l;
    cin>>n>>l;
    vector<int> d(n);
    rep(i,n-1){
        int di;
        cin>>di;
        d.at(n+1)=(d.at(n)+di)%l;
    }
    // rep(i,n)cout<<d.at(i)<<endl;
    
}