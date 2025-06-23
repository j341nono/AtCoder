#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n,now;
    cin>>n>>now;
    rep(i,n){
        string op;
        int b;
        cin>>op>>b;
        if(op=="+")now+=b;
        else if(op=="-")now-=b;
        else if(op=="*")now*=b;
        else if(op=="/"&&b==0){
            cout<<"error"<<endl;
            break;
        }
        else now/=b;
        cout<<i+1<<":"<<now<<endl;
    }
}