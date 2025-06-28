#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)

int main(){
    int n,q;
    cin>>n>>q;
    vector<bool> b(n,false);
    int cnt=0;
    rep(i,q){
        int a;
        cin>>a;
        if(b.at(a-1)==false){
            if(b.at(a-1)){
                if(b.at(a-1)==false&&a!=0&&a!=n&&b.at(a)==false&&b.at(a+1)==false)cnt++;
            }
            b.at(a-1)=true
        else b.at(a-1)=false;
        if(b.at(a-1)==true&&a!=0&&a!=n&&b.at(a-1)==false&&b.at(a-1)==false)cnt++;
        if(b.at(a-1)==false&&a!=0&&a!=n&&b.at(a-1)==true&&b.at(a-1)==true)cnt++;
        if(b.at(a-1)==true&&a!=0&&a!=n&&b.at(a-1)==true&&b.at(a-1)==true)cnt--;
        if(b.at(a-1)==false&&a!=0&&a!=n&&b.at(a-1)==false&&b.at(a-1)==false)cnt--;
        cout<<cnt<<endl;
    }
}