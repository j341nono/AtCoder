#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)

int main(){
    string s;
    cin >> s;

    int ans = 0, x = 0;
    while (s != "") {
        while (1) {
            int d = s.back()-'0';
            if ((d-x)%10 == 0) break;
            ans++; x++;
        }
        s.pop_back();
        ans++;
    }

    cout << ans << endl;
    return 0;
}