#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  int sum=0;
  vector<int> a(N);
  rep(i,N){
    cin>>a.at(i);
    sum+=a.at(i);
    }
  int mean=sum/N;
  rep(i,N){
    if(a.at(i)>mean)cout<<a.at(i)-mean<<endl;
    else cout<<mean-a.at(i)<<endl;
  }
}
