#include <iostream>
using namespace std;
template <class T>
T getmax(T t1, T t2)
{
    return t1 > t2 ? t1 : t2;
}
template <class T>

T getmax(T t[], size_t size)
{
    T retval = t[0]; int i;
    for (i = 0; i < size; i++)
        if (t[i] > retval)
            retval = t[i];
    return retval;
}
int main()
{
    int il = 3, i2 = 5; int mas[] = { 3, 9, 5, 8 };
    cout << "max int = " << getmax(il, i2) << endl;
    cout << "max int = " << getmax(mas, sizeof(mas) / sizeof(mas[0])) << endl; cout << "max int = " << getmax(mas, sizeof(mas) / sizeof(mas[0])) << endl;
}