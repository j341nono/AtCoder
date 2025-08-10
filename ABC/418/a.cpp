#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n>=3&&s.substr(n-3)=="tea"){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}