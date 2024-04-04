#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void customSort(vector<int>& arr) {
    vector<int> even;
    vector<int> odd;
    for (int num : arr) {
        if (num % 2 == 0)
            even.push_back(num);
        else
            odd.push_back(num);
    }

    sort(even.begin(), even.end());

    sort(odd.begin(), odd.end(), greater<int>());

    int i = 0;
    for (int num : even) {
        arr[i++] = num;
    }
    for (int num : odd) {
        arr[i++] = num;
    }
}

void main() {
    vector<int> arr = { 2, 5, -8, 1, -4, 6, 3, -5, -9, 13, 0, 4, 9 };

    cout << "array:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    customSort(arr);

    cout << "sorted array:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}