#include <iostream>
#include<conio.h>
using namespace std;


struct element
{
    int x;
    element* Next;
};
class List 
{
    element* Head;
public:
    List() { Head = NULL; }


    ~List(); 
    void Add(int x);
    void Show();
};

List::~List()
{
    while (Head != NULL)
    {
        element* temp = Head->Next;
        delete Head;
        Head = temp;
    }
}
void List::Add(int x)
{
    element* temp = new element;
    temp->x = x;
    temp->Next = Head;
    Head = temp;
}
void List::Show()
{
    element* temp = Head;

    while (temp != NULL)
    {
        std::cout << temp->x << " ";
        temp = temp->Next;
    }
}
void main() {
 
    int N;
    int x;
    List lst;

    std::cout << "N = ";
    std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        std::cout << i + 1 << ". x = ";
        std::cin >> x;
        lst.Add(x);
    }

    lst.Show();
    std::cin.ignore().get();
}