#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)

int main(){
    int a,b;
    cin>>a>>b;
    double real=a/double(b);
    int c;
    double d;
    c=a/b;
    d=c+1;
    if (real-c > d-real) cout<<d<<endl;
    else cout<<c<<endl;
    return 0;
}