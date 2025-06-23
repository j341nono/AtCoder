#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)

void t1(vector<int>& a,int p,int x,int off,int n){
    a.at((off+p-1)%n)=x;
}

int t2(vector<int>& a,int p,int n,int off){
    return a.at((off+p-1)%n);
}

void t3(vector<int>& a,int k,int n,int &off){
    off=(off+k)%n;
}

int main(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    rep(i,n)a.at(i)=i+1;
    int off=0;
    rep(i,q){
        int t;
        cin>>t;
        if(t==1){
            int p,x;
            cin>>p>>x;
            t1(a,p,x,off,n);
        }
        else if(t==2){
            int p;
            cin>>p;
            int out=t2(a,p,n,off);
            cout<<out<<endl;
        }
        else{
            int k;
            cin>>k;
            t3(a,k,n,off);
        }
    }

}