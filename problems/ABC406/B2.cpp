#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)

int main(){
    int N,K,A[109];
    cin>>N>>K;
    rep(i,N) cin>>A[i];
    int S=1,limit=1;
    rep(i,K) limit*=10;
    limit--;
    rep(i,N){
        S*=A[i];
        if (S>=limit){
            S=1;
            break;
        }
    }
    cout<<S<<endl;
    return 0;
}