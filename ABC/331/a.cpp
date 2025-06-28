#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)

int main(){
    int M,D;
    cin>>M>>D;
    int y,m,d;
    if(d>D)d++;
    else{
        d=0;
        if(m>M)m++;
        else{
            m=0;
            y++;
        }
    }
    cout<<y<<m<<d<<endl;
}