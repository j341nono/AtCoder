#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin>>n;
    string t; string a;
    cin>>t>>a;
    bool flg=false;
    for(char x:t){
        for(char y:a){
            if(x==y)flg=true;
        }
    }
    if(flg)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}