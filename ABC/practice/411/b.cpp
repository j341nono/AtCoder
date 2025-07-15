#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin>>n;
    vector<int> d(n);
    d.at(0)=0;
    rep(i,n-1){
        int aa=0;
        cin>>aa;
        d.at(i+1)=d.at(i)+aa;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)cout<<d.at(j)-d.at(i)<<" ";
        cout<<endl;
    }
}