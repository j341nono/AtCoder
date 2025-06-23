#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    P=make_pair<int,int>;
    if P(a,c)>P(c,d) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}