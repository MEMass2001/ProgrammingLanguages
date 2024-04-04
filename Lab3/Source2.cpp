#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; ++j) {
        if (arr[j] <= pivot) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1); 
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void main() {
    const int size = 13;
    int mas[size] = { 2, 5, -8, 1, -4, 6, 3, -5, -9, 13, 0, 4, 9 };

    cout << "array: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << mas[i] << " ";
    }
    cout << endl;

    quickSort(mas, 0, size - 1); 

    cout << "sorted array: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << mas[i] << " ";
    }
    cout << endl;
}