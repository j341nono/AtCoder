#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)

int main(){
    int n;
    cin>>n;
    int z=0;
    rep(i,n){
        int a,b;
        cin>>a>>b;
        if(b>a)z++;
    }
    cout<<z<<endl;
}
