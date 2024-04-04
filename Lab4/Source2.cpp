#include <iostream> 
using namespace std;

int main()
{
	int dlina1(char*);
	int dlina2(char*);
	int dlina3(char*);
	void kopir(char*, char*);
	int compr(char*, char*);
	void concat(char*, char*);
	char str[] = "qwerty";
	char str1[25] = "1234567890";


	cout << "‘ункци€ определ€юща€ длину строки с помощью цикла for: " << dlina1(str) << endl;
	cout << "‘ункци€ определ€юща€ длину строки с помощью цикла while: " << dlina2(str) << endl;
	cout << "‘ункци€ определ€юща€ длину строки с помощью перевода массива в строку и применени€ к ней стандартой функции length(): " << dlina3(str) << endl;
	kopir(str1, str);
	cout << "‘ункци€ копирующа€ одну строку в другую: " << str1 << endl;
	cout << "‘ункци€,сравнивающа€ строки: " << compr(str, str1) << endl;
	concat(str1, str);
	cout << "‘ункци€,склеивающа€ строки (конкатенаци€): " << str1 << endl;
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
	char* chr = arr;
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