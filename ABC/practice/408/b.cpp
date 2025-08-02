#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n,q;
    cin>>n>>q;
    vector<int>N(n,0);
    rep(i,q){
        int x;
        cin>>x;
        if(x==0){
            int min=0;
            rep(j,n){
                if(N.at(j)<N.at(min))min=j;
            }          
            N.at(min)++;
            min++;
            cout<<min<<" ";
        }else{
            x--;
            N.at(x)++;
            x++;
            cout<<x<<" ";
        }
    }
    cout<<endl;
}