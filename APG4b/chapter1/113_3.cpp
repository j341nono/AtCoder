#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin>>n;
    vector<int> l(n);
    vector<bool> flg(n,false);
    rep(i,n)cin>>l.at(i);
    int cnt=0;
    int i=0;
    while(1){
        cnt++;
        flg.at(i)=true;
        i=l.at(i)-1;
        if(i==1)break;
        if(flg.at(i))break;
    }
    if(i==1)cout<<cnt<<endl;
    else cout<<-1<<endl;
}
