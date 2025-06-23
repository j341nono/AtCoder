#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a.at(i);
    sort(a.rbegin(),a.rend());
    int cnt=0;
    if(n%2==0){
        for(int i=0;i<n;i=i+2)cnt+=a.at(i)-a.at(i+1);
    }
    else{
        for(int i=0;i<n-1;i=i+2)cnt+=a.at(i)-a.at(i+1);
        cnt+=a.at(n-1);
    }
    cout<<cnt<<endl;
}
