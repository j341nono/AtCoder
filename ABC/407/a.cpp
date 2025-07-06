#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int a,b;
    cin>>a>>b;
    int c=a/b;
    int d=c+1;
    if(abs(((double)a/b-c))>(abs((double)a/b-d)))cout<<d<<endl;
    else cout<<c<<endl;
}