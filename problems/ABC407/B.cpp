#include <iostream>
#include <iomanip> // manipulator

using namespace std;

int main(){
    int X, Y;
    cin >> X >> Y;

    int cnt = 0;
    for (int i=1; i<=6; ++i){
        for (int j=1; j<=6; ++j){
            if (i+j>=X || i+Y<=j || j+Y<=i) ++cnt;
        }
    }
    cout << setprecision(10) << cnt / 36. << endl;
    return 0;
}