#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)

int main(){
    string s;
    cin>>s;
    int a=0;
    for(char c : s){
        if(c=='-'){
            a++;
        }
        else{
            if(a>0){
                cout<<a<<" ";
                a=0;
            }
        }
    }
    cout<<endl;
}