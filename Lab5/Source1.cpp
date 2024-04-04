#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void main()
{
    setlocale(LC_ALL, "rus");
    ifstream in; 
    string read_line = "";
    in.open("1.txt");


    if (in.is_open()) 
    {
        cout << "Файл открыт для чтения" << endl;
        while (getline(in, read_line))
        {
            cout << read_line << endl;
        }
    }
    else
    {
        cerr << "Ошибка, файл не открыт" << endl;
    }
    in.close();
}