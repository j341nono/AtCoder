#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int N,A,B;
    string S;
    cin>>N>>A>>B;
    cin>>S;
    cout<<S.substr(A,N-A-B)<<endl;
}