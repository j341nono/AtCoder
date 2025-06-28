#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)

int main(){
    int n;
    cin>>n;
    vector<int> d(n-1);
    rep(i,n-1)cin>>d.at(i);
    for(int i=0;i<n-1;i++){
        int x=d.at(i);
        cout<<x<<" ";
        for(int j=i+1;j<n-1;j++){
            x+=d.at(j);
            cout<<x<<" ";
        }
        cout<<endl;
    }
}