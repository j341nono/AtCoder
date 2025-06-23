#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)



int main(){
    int n,h,m;
    cin>>n>>h>>m;
    vector<int> ken(n);
    vector<int> maho(n);
    rep(i,n){
        cin>>ken.at(i);
        cin>>maho.at(i);
    }

    vectoro<bool> stage(n,false);
    //全探索
    rep(i,n){
        vector<int> ken_(n);
        vector<int> maho_(n);
        rep(k,i){
            ken_.at(k)=ken.at(k);
            maho_.at(k)=,maho.at(k);
        }
        // ビット全探索
        rep(index,i*i){
            int max_ken=h;
            int max_maho=m;
            
        }

        

        
    }
}