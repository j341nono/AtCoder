#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)

int main(){
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    bool flg=false;
    if(C>A) flg=true;
    else if(B>D) flg=true;
    string ans;
    if(flg)ans="Yes"; else ans="No";
    cout<<ans<<endl;
    return 0;
}