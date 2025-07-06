#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
    int n,l;
    cin>>n>>l;
    vector<int> d(n);
    d.at(0)=0;
    rep(i,n-1){
        int bf;
        cin>>bf;
        d.at(i+1)=(d.at(i)+bf)%l;
    }
    vector<int> cnt(l);
    rep(i,n)cnt.at(d.at(i))++;
    if(l%3!=0){
        cout<<0<<endl;
        return 0;
    }
    int boa=l/3; ll c=0;
    rep(i,n){
        int a=(d.at(i)+boa)%l;
        int b=(a+boa)%l;
        c+=(ll)cnt.at(a)*cnt.at(b);
    }
    c/=3;
    cout<<c<<endl;
}


/*
ループ変数を間違えていた

int : 2 * 10^9
long long : 9 * 10^18
今回の cnt.at(a)*cnt.at(b) は, 3×10^5 ^2 = 9*10^10 -> long longを使用

vector<int> d(n); これで初期値は0だと思っていて，ローカルでは大丈夫だったが，atcoderで実行時エラー
d.at(0)=0; で解決

*/