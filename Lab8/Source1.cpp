#include <iostream>
#include "MyString.h"

using namespace std;

int main() {
    MyString str1("ASDSDFDSF");
    MyString str2("ASDASDDAS");

    MyString str3 = str1 + str2;
    cout << "������������ ������: " << str3 << endl;

    if (str1 == str2) {
        cout << "������ �����: " << endl;
    }
    else {
        cout << "������ �� �����:" << endl;
    }

    cout << "����� ������:" << str1.length() << endl;

    MyString str4;
    cout << "�������: ";
    cin >> str4;
    cout << "��������� ������:" << str4 << endl;

    return 0;
}