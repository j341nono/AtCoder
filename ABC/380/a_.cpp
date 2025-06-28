#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)

int main(){
    int n;
    cin>>n;
    int x=0,y=0,z=0;
    while(n>0){
        int a=n%10;
        if(a==1)x++;
        if(a==2)y++;
        if(a==3)z++;
        n/=10;
    }
    if(x==1&&y==2&&z==3){cout<<"Yes"<<endl;}
    else {cout<<"No"<<endl;}
}