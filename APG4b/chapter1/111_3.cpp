#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin>>n;
    int origin=n;
    int f=0;
    while(n>0){
        f+=n%10;
        n=n/10;
    }
    if(origin%f==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}