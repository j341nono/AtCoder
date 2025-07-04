#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a.at(i);
    int i=0;
    int cnt=0;
    while(1){
        cnt=0;
        rep(j,n){
            if(a.at(j)>=i)cnt++;
        }
        if(cnt<i)break;
        i++;
        if(i>n)break;
    }
    i--;
    cout<<i<<endl;
}

/*
正解より1大きい値を出力してしまう
単純に条件を満たさないことがわかってループを抜けるということは，
満たす部分まで戻る必要がある
*/