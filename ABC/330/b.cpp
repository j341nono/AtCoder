#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n,l,r;
    cin>>n>>l>>r;
    rep(i,n){
        int a;
        int y;
        cin>>a;
        int ans=0;
        for(int x=l;x<=r;x++){
            for(int y=l;y<=r;y++){
                if(abs(y-a)<=abs(x-a)){
                    // ans=y;
                    cout<<y<<" ";
                }
            }
        }
        // cout<<ans<<" ";
    }
    cout<<endl;
}