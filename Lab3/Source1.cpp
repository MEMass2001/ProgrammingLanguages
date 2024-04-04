#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	int mas[] = { 2, 5, -8, 1, -4, 6, 3, -5, -9, 13, 0, 4, 9 };
	int imin, imax;
	int n = sizeof(mas) / sizeof(int);
	int i, temp;

	cout << "before sorting: ";
	for (i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	cout << "after bubble sorting:";
	for (i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++)
		{
			if (mas[j] < mas[i]) {
				temp = mas[i];
				mas[i] = mas[j];
				mas[j] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;

	int base;
	cout << "Press Enter to close this window";
	cin >> base;
}