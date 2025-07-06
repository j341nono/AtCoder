#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int x,y;
    cin>>x>>y;
    int ans=0;
    rep(i,6){
        rep(j,6){
            bool flg=false;
            if((i+1)+(j+1)>=x)flg=true;
            if(abs((i+1)-(j+1))>=y)flg=true;
            if(flg)ans++;
        }
    }
    cout<<setprecision(10)<<ans/36.<<endl;
}