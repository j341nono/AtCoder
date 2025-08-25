#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int x,y;
    cin>>x>>y;
    int ans=x+y;
    if(ans>12)ans-=12;
    cout<<ans<<endl;
}