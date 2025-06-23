#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=1; i<=(n); ++i)

int main(){
    int x,y;
    cin>>x>>y;
    int cnt=0;
    rep(i,6){
        rep(j,6){
            bool flg=false;
            if(i+j>=x)flg=true;
            if(i+y<=j || j+y<=i)flg=true;
            if(flg) cnt++;
        }
    }
    cout<<setprecision(10)<<cnt/36.<<endl;
    return 0;
}