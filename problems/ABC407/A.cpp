#include <iostream>
using namespace std;

int A, B;

int main(){
    cin >> A >> B;

    float c;
    int x, y;

    c = float(A) / B;
    
    x = A / B;
    y = x + 1;

    if (c - x > y - c) cout << y << endl;
    else cout << x << endl;
    return 0;
}


