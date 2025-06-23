#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  int sum=1;
  rep(i,S.size()){
    if(i%2==1){
        if(S.at(i)=='+')sum++;
        else sum--;
    }
  }
  cout<<sum<<endl;
}
