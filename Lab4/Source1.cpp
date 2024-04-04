#include <iostream>
#include <string.h> 

using namespace std;

int main() {
    char str1[20] = "Hello";
    char str2[20] = " world";
    char str3[20]; 

    cout << "Длина строки str1: " << strlen(str1) << endl;

    strcat(str1, str2);
    cout << "Результат конкатенации: " << str1 << endl;

    strcpy(str3, str1);
    cout << "Копия строки str1: " << str3 << endl;

    int result = strcmp(str1, str3);
    if (result == 0)
        cout << "Строки str1 и str3 равны." << endl;
    else if (result < 0)
        cout << "Строка str1 меньше строки str3." << endl;
    else
        cout << "Строка str1 больше строки str3." << endl;

    return 0;
}