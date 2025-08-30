#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll=long long;

int main() {
    int x,y;
    cin>>x>>y;
    vector<ll>a(11);
    a[1]=x;
    a[2]=y;
    for(int i=3;i<=10;i++){
        ll sum=a[i-1]+a[i-2];
        ll rev=0;
        while(sum>0){
            rev=rev*10+sum%10;
            sum/=10;
        }
        a[i]=rev;
    }
    cout<<a[10]<<endl;
}