#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin>>n;
    int min=100000000;
    rep(i,n){
        int a;
        cin>>a;
        int c=0;
        while(1){
            if(a%2!=0)break;
            c++;
            a/=2;
        }
        if(c<min)min=c;
    }
    cout<<min<<endl;
}