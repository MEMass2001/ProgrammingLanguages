#include "MyString.h"
#include <cstring>

using namespace std;

MyString::MyString() : data(nullptr) {}

MyString::MyString(const char* str) {
    if (str != nullptr) {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    }
    else {
        data = nullptr;
    }
}

MyString::MyString(const MyString& other) {
    if (other.data != nullptr) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
    }
    else {
        data = nullptr;
    }
}

MyString::~MyString() {
    delete[] data;
}

MyString& MyString::operator=(const MyString& other) {
    if (this != &other) {
        delete[] data;
        if (other.data != nullptr) {
            data = new char[strlen(other.data) + 1];
            strcpy(data, other.data);
        }
        else {
            data = nullptr;
        }
    }
    return *this;
}

MyString MyString::operator+(const MyString& other) const {
    MyString result;
    if (data != nullptr && other.data != nullptr) {
        result.data = new char[strlen(data) + strlen(other.data) + 1];
        strcpy(result.data, data);
        strcat(result.data, other.data);
    }
    else if (data != nullptr) {
        result = *this;
    }
    else if (other.data != nullptr) {
        result = other;
    }
    return result;
}

bool MyString::operator==(const MyString& other) const {
    return strcmp(data, other.data) == 0;
}

size_t MyString::length() const {
    return (data != nullptr) ? strlen(data) : 0;
}

ostream& operator<<(ostream& os, const MyString& str) {
    if (str.data != nullptr) {
        os << str.data;
    }
    return os;
}

istream& operator>>(istream& is, MyString& str) {
    char buffer[1024];
    is >> buffer;
    str = MyString(buffer);
    return is;
}