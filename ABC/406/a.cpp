#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>c){
        cout<<"Yes"<<endl;
        return 0;
    }
    else if(a<c){
        cout<<"No"<<endl;
        return 0;
    }
    if(b>d){
        cout<<"Yes"<<endl;
        return 0;  
    }
    cout<<"No"<<endl;
}