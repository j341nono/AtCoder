#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)

int main(){
    int N,K;
    cin>>N>>K;
    long long limit=1;
    long long S=1,a;
    rep(i,K) limit*=10;
    limit--;
    rep(i,N){
        cin>>a;
        if(S>limit/a){
            S=1;
        }
        else S*=a;
    }
    cout<<S<<endl;
    return 0;
}