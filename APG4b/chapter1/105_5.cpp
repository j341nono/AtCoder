#include <bits/stdc++.h>
using namespace std;

int main() {
    int s;
    cin>>s;
    int a=s/100;
    s=s%100;
    int b=s/10;
    int c=s%10;
    cout<<a+b+c<<endl;
}
