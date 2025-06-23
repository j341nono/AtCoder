#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int a,b;
    cin>>a>>b;
    int cnt=0;
    for(int i=a;i<=b;i++){
        int a,b,c,d,e;
        int n=i;
        e=n%10;
        n/=10;
        d=n%10;
        n/=10;
        c=n%10;
        n/=10;
        b=n%10;
        a=n/10;
        if((a==e)&&(b==d))cnt++;
    }
    cout<<cnt<<endl;
}