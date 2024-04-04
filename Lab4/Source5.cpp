#include <iostream> 
#include <cstdlib>
#include <sec_api/string_s.h>
using namespace std;

int main()
{
	int dlina1(char*);
	int dlina2(char*);
	int dlina3(char*);
	void kopir(char*, char*);
	int compr(char*, char*);
	void concat(char*, char*);
	char* date1[7];
	char* words[7];
	for (int i = 0; i < 7; i++)
	{
		date1[i] = (char*)malloc(100);
		words[i] = (char*)malloc(100);
		strncpy_s(date1[i], 25, "25", 25);
		strncpy_s(words[i], 7, "qwerty", 7);
	}

	cout << "‘ункци€ определ€юща€ длину строки с помощью цикла for: " << dlina1(date1[1]) << endl;
	cout << "‘ункци€ определ€юща€ длину строки с помощью цикла while: " << dlina2(words[0]) << endl;
	cout << "‘ункци€ определ€юща€ длину строки с помощью перевода массива в строку и применени€ к ней стандартой функции length(): " << dlina3(date1[1]) << endl;
	kopir(words[0], date1[1]);
	cout << "‘ункци€ копирующа€ одну строку в другую: " << words[0] << endl;
	cout << "‘ункци€,сравнивающа€ строки: " << compr(date1[1], words[0]) << endl;
	concat(words[0], date1[1]);
	cout << "‘ункци€,склеивающа€ строки (конкатенаци€): " << words[0] << endl;
	for (int i = 0; i < 7; i++)
	{
		free(date1[i]);
		free(words[i]);
	}
}

int dlina1(char* arr)
{
	int count = 0;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}

int dlina2(char* arr)
{
	char* chr = (char*)malloc(100);
	int count = 0;
	while (*chr != '\0') {
		count++;
		chr++;
	}
	return count;
}

int dlina3(char* arr)
{
	string str(arr);
	return str.length();
}

void kopir(char* arr1, char* arr)
{
	for (int i = 0; arr[i] != '\0'; i++)
	{
		arr1[i] = arr[i];
	}
}

int compr(char* arr, char* arr1)
{
	int i = 0, result = 0;
	while (((arr[i] != '\0') && (arr1[i] != '\0')))
	{
		if (int(arr[i]) > int(arr1[i]))
		{
			result = 1;
			break;
		}
		if (int(arr[i]) < int(arr1[i]))
		{
			result = -1;
			break;
		}
		i++;
	}
	return result;
}

void concat(char* a, char* b)
{
	int len = dlina2(a);
	len += 0;
	int i = 0;
	for (; b[i] != '\0'; i++)
	{
		a[len + i] = b[i];
	}
	a[len + i] = '\0';
}