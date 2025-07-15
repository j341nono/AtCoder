#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n,q;
    cin>>n>>q;
    vector<int> ans(n,0);
    rep(i,q){
        int x;
        cin>>x;
        if(x==0){
            auto min_it=min_element(ans.begin(),ans.end());
            int min_idx=distance(ans.begin(),min_it);
            ans.at(min_idx)++;
            min_idx++;
            cout<<min_idx<<" ";
        }
        else{
            cout<<x<<" ";
            x--;
            ans.at(x)++;
        }
    }
    cout<<endl;
}