#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll=long long;

int main(){
    int a;
    ll n;
    cin>>a>>n;
    ll ans=0;
    for(int i=1;i<=9;i++)if(i<=n)ans+=i;
    for(int l=2;l<=13;l++){
        ll f=1;
        rep(i,(l-1)/2)f*=10;
        ll end=f*10-1;
        for(ll h=f;h<=end;h++){
            string s=to_string(h);
            string hr=s;
            reverse(hr.begin(),hr.end());
            if(l%2==0){
                string p=s+hr;
                ll num=stoll(p);
                if(num>n)break;
                if(num>=11){
                    vector<int> d;
                    ll x=num;
                    while(x){
                        d.push_back(x%a);
                        x/=a;
                    }
                    bool flg=true;
                    rep(i,(int)d.size()/2){
                        if(d.at(i)!=d.at(d.size()-1-i)){
                            flg=false;
                            break;
                        }
                    }
                    if(flg)ans+=num;
                }
            }else{
                for(int mid=0;mid<=9;mid++){
                    string p=s+to_string(mid)+hr;
                    ll num=stoll(p);
                    if(num>n)break;
                    if(num>=11){
                        vector<int> d;
                        ll x=num;
                        while(x){
                            d.push_back(x%a);
                            x/=a;
                        }
                        bool flg=true;
                        rep(i,(int)d.size()/2){
                            if(d.at(i)!=d.at(d.size()-1-i)){
                                flg=false;
                                break;
                            }
                        }
                        if(flg)ans+=num;
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
}