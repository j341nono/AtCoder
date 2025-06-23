#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    rep(i,n)cin>>v.at(i);
    int k;
    cin>>k;
    int cnt=0;
    rep(i,n){
        if(k<=v.at(i))cnt++;
    }
    cout<<cnt<<endl;
}