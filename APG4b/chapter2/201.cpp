#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    vector<int> a(5);
    rep(i,5)cin>>a.at(i);
    rep(i,4){
        if(a.at(i)==a.at(i+1)){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
