#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    string s;
    cin>>s;
    int n=s.size();
    vector<int> T;
    rep(i,n){
        if(s[i]=='t')T.push_back(i);
    }
    double maxr=0.0;
    if (T.size()<2){
        cout<<fixed<<setprecision(10)<<maxr<<endl;
        return 0;
    }
    int m=T.size();
    for(int i=0;i<m;++i){
        for(int j=i+1;j<m;++j) {
            int start=T[i];
            int end=T[j];
            int len=end-start+1;
            if(len<3)continue;
            int cnt=j-i+1;
            double rate=static_cast<double>(cnt-2)/(len-2);
            maxr = max(maxr, rate);
        }
    }
    cout<<fixed<<setprecision(10)<<maxr<<endl;
}