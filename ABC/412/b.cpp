#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)

int main(){
    string s,t;
    cin>>s>>t;
    rep(i,s.size()){
        if(i!=0){
            if(isupper(s.at(i))){
                bool flg=false;
                char b=s.at(i-1);
                rep(i,t.size()){
                    if(b==t.at(i))flg=true;
                }
                if(flg==false){
                    cout<<"No"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"Yes"<<endl;
}
