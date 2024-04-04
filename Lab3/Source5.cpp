#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void customSort(vector<int>& arr, int N1, int N2) {
    if (N1 < 0 || N2 >= arr.size() || N1 >= N2) {
        cout << "wrong interval" << endl;
        return;
    }

    vector<int>::iterator start = arr.begin() + N1;
    vector<int>::iterator end = arr.begin() + N2 + 1;

    sort(start, end, greater<int>());
}

void main() {
    vector<int> arr = { 2, 5, -8, 1, -4, 6, 3, -5, -9, 13, 0, 4, 9 };
    int N1 = 2; 
    int N2 = 5; 

    cout << "array:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    customSort(arr, N1, N2);

    cout << "sorted array N1 = " << N1 << " N2 = " << N2 << ":" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}