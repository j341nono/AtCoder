#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    string s;
    cin>>s;
    int cnt=0;
    int a1=0;
    int i=0;
    for(char c:s){
        if(c=='.'){
            i++;
            continue;
        }else{
            cnt++;
            if(cnt==1){
                a1=i+1;
            }
            if(cnt==2){
                cnt=0;
                i++;
                cout<<a1<<','<<i<<endl;
                i--;
            }
        }
        i++;
    }
}