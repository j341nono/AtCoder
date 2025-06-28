#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int N,M;
    cin>>N>>M;
    vector<int> A(M),B(M);
    rep(i,M)cin>>A.at(i)>>B.at(i);
    vector<vector<char> > b(N,vector<char>(N,'-'));
    rep(i,M){
        b.at(A.at(i)-1).at(B.at(i)-1)='o';
        b.at(B.at(i)-1).at(A.at(i)-1)='x';
    }
    rep(i,N){
        rep(j,N){
            cout<<b.at(i).at(j);
            if(j!=N-1)cout<<" ";
        }
        cout<<endl;
    }
}
