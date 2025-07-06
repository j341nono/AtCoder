#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin>>n;
    vector<string> s(n);
    rep(i,n)cin>>s.at(i);
    set<string> sum;
    rep(i,n){
        rep(j,n){
            if(i==j)continue;
            sum.insert(s.at(i)+s.at(j));
        }
    }
    cout<<sum.size()<<endl;
}


/*
int main(){
    int n;
    cin>>n;
    vector<string> s(n);
    rep(i,n)cin>>s.at(i);
    vector<string> sum;
    rep(i,n){
        rep(j,n){
            if(i==j)continue;
            string now=s.at(i)+s.at(j);
            bool flg=false;
            rep(k,sum.size()){
                if(sum.at(k)==now){
                    flg=true;
                    break;
                }
            }
            if(flg==false)sum.push_back(now);
        }
    }
    cout<<sum.size()<<endl;
}
*/


/*
i==j の時に止めることを見落としていた

*/