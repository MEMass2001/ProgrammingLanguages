#include <iostream>
using namespace std;

void obmen1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void obmen2(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void obmen3(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void main() {
    int a = 2, b = 5;
    cout << "before obmen: a=" << a << " b=" << b << endl;
    obmen1(a, b);
    cout << "after obmen1: a=" << a << " b=" << b << endl;
    obmen2(&a, &b);
    cout << "after obmen2: a=" << a << " b=" << b << endl;
    obmen3(a, b);
    cout << "after obmen3: a=" << a << " b=" << b << endl;

    int base;
    cout << "Press Enter to close this window";
    cin >> base;
}