#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    string s;
    cin>>s;
    int ans=0; int sum=0;
    while(s!=""){
        while(1){
            int c=s.back()-'0';
            if((c-sum)%10==0)break;
            ans++; sum++;
        }
        s.pop_back();
        ans++;
    }
    cout<<ans<<endl;
}

/*
2つ目のwhile文の部分．
非常に単純に考えられなかった

*/