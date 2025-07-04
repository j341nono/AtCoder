#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> s(n+1);
    rep(i,m){
        int l,r;
        cin>>l>>r;
        l--;
        s.at(l)++; s.at(r)--;
    }
    rep(i,n)s.at(i+1)+=s.at(i);
    int z = *min_element(s.begin(),s.begin()+n);
    cout<<z<<endl;
}

/*
累積和の発想
ループ内で標準入力忘れ
*/