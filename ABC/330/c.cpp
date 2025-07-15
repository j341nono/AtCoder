#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll=long long;

int main(){
    ll d;
    cin>>d;
    // D と x^2+y^2 が一番近くなる時の，値を見つける問題
    ll y = static_cast<ll>(sqrt(d));
    cout<<y<<endl;

    ll x = static_cast<ll>(sqrt(d - y*y));
    cout<<x<<endl;

    ll ans = d - x*x - y*y;
    cout<<ans<<endl;

    x++;
    ll ansx = d - x*x - y*y;
    cout<<ansx<<endl;
    x--;

    y++;
    ll ansy = d - x*x - y*y;
    cout<<ansy<<endl;
    y--;

    x++;
    y++;
    ll ansxy = d - x*x - y*y;
    cout<<ansxy<<endl;

    
}