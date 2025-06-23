#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n,k;
    cin>>n>>k;
    int s=0;
    rep(i,n){
        int x;
        cin>>x;
        if(k-x>x)s+=2*x;
        else s+=2*(k-x);
    }
    cout<<s<<endl;
}