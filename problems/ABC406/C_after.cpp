#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=1; i<=(n); ++i)

int main(){
    string s;
    cin>>s;
    int now=0,del=s.size();
    while(s.size()==0){
        int d=s.back()-'0';
        now+=d;
        s.pop_back();
        s.back()=(s.back()-'0'-now)*10%10;
    }
    cout<<now+del<<endl;
    return 0;
}