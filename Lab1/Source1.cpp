#include <iostream>
using namespace std;

int power(int x, int n) {
    int p = 1;
    for (int i = 0; i < n; i++) {
        p *= x;
    }
    return p;
}

void main() {
    int i, k;
    int base;
    cout << "Enter base: ";
    cin >> base;

    for (i = 0; i < 10; i++) {
        k = power(base, i);
        cout << "i = " << i << ", k = " << k << endl;
    }

    cout << "Press Enter to close this window";
    cin >> base;
}

