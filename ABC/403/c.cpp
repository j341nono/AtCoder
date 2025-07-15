#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n,m,q;
    cin>>n>>m>>q;
    vector<vector<bool>> v(n,vector<bool>(m,false));
    while(q--){
        int type;
        cin>>type;
        if(type==1){
            int x,y;
            cin>>x>>y;
            x--;y--;
            v.at(x).at(y)=true;
        }
        if(type==2){
            int x;
            cin>>x;
            x--;
            rep(i,m){
                v.at(x).at(i)=true;
            }
        }
        if(type==3){
            int x,y;
            cin>>x>>y;
            x--;y--;
            if(v.at(x).at(y))cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}


/*
単純に二次元配列で実装すると，n*m=4 * 10^10 でTLE

ユーザーの権限の集合と，全部の権限があるかどうかの配列を使用する考え
*/