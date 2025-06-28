#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=1; i<(n); ++i)

int main(){
    string s;
    cin>>s;
    vector<int> ans;
    int bf;
    int in=0;
    rep(i,s.size()){
        if(s.at(i)=='|'){
            ans.at(in)=bf;
            bf=0;
            in++;
        }
        else{bf++;}
    }
    for(int i=0;i<ans.size();i++)cout<<ans.at(i);
    cout<<endl;
}