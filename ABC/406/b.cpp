#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll=long long;

int main(){
    int n,k;
    cin>>n>>k;
    ll ans=1;ll c=1;
    while(k--)c*=10;
    c--;
    rep(i,n){
        ll a;
        cin>>a;
        if(a>=c/ans)ans=1;
        else ans*=a;
    }
    cout<<ans<<endl;
}

/*
不等式の性質を利用して同値な表現に変える
ans, a, limit はすべて正の整数です。
ある整数 X が limit 以上である、ということは、X が limit - 1 より大きい (>) ことと全く同じ意味です。
*/