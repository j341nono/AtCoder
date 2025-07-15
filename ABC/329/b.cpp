#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin>>n;
    int max=0;
    vector<int> a(n);
    rep(i,n){
        int aa;
        cin>>aa;
        if(aa>max)max=aa;
        a.at(i)=aa;
    }
    int sec=0;
    rep(i,n){
        if(a.at(i)==max)continue;
        if(a.at(i)>sec)sec=a.at(i);
    }
    cout<<sec<<endl;
}

/*
変なライブラリを使わずに愚直にやろう
*/