#include <iostream>
#include <iostream>
#include<ctype.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
	char fname[15], c;
	cout << "Напишите имя файла для создания: "; cin >> fname;
	ifstream inf;
	inf.open(fname, ios::in);
	if (!inf.is_open())
	{
		cout << "Не открывается входной файл " << fname;
		return 0;
	}
	else
	{
		cout << "Имя выходного файла для печати: ";
		cin >> fname;
		ofstream ofs;
		ofs.open(fname, ios::out | ios::trunc);
		if (!ofs.is_open()) 
		{
			cout << "Не открывается выходной файл: " << fname;
		}
		while (!inf.eof())
		{
			inf.get(c);
			c = toupper(c);
			ofs.put(c);
		}
	}
}