#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)

int main(){
    string s;
    cin>>s;
    vector<int> a(6);
    rep(i,6)a.at(i)=b.at(i)-'0'
    sort(a.begin(),a.end());
    if(a.at(0)==1 && a.at(1)==2 && a.at(2)==2 && a.at(3)==3 a.at(4)==3 && a.at(5)==3){
        cout<<"Yes"<<endl;
        return 0;
    }
    cout<<"No"<<endl;
}