#include <stdio.h>
#include<iostream>
#include <stdlib.h>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	string s, num;
	char ch, name[50] = "start.txt";

	ofstream out{ "result.txt" };
	ifstream file("start.txt");
	getline(file, s);

	while (!file.eof()) {
		num = s;
		getline(file, s);
		do
		{
			out << s << endl;
			getline(file, s);
		} while (s[s.size() - 1] != '\f');
		s.erase(s.size() - 1, 1);
		out << s << endl;
		num.insert((num.size()), "\f");
		out << num << endl;
		getline(file, s);
	}
}