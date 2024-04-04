#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>

using namespace std;

class MyString {
private:
    char* data;

public:
    MyString();
    MyString(const char* str);
    MyString(const MyString& other);

    ~MyString();

    MyString& operator=(const MyString& other);
    MyString operator+(const MyString& other) const;
    bool operator==(const MyString& other) const;

    size_t length() const;

    friend ostream& operator<<(ostream& os, const MyString& str);
    friend istream& operator>>(istream& is, MyString& str);
};

#endif // MYSTRING_H