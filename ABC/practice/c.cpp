#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll=long long;

int main(){
    int Q;
    cin>>Q;
    queue<pair<int,int>> q;
    while(Q--){
    	int type;
	cin>>type;
	if(type==1){
	    int c,x;
	    cin>>c>>x;
	    q.emplace(x,c);
	}
	if(type==2){
	    int k;
	    cin>>k;
	    ll sum=0;
	    while(k>0){
		auto [x,c]=q.front();
		if(c<k){
		    k-=c;
		    sum+=(ll)x*c;
		    q.pop();
		}else{
		    q.front().second-=k;
		    sum+=(ll)x*k;
		    k=0;
		}
	    }
	    cout<<sum<<"\n";
	}
    }

}
