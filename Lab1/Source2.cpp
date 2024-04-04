#define PR(x)  printf("x=%u, *x=%f, &x=%u \n",x,*x, &x) 
#include <stdio.h> 

using namespace std;

void main()
{
    float mas[] = { 123.4, 567.8, 901.2 };
    float *ptrl, *ptr2;
    ptrl = mas;
    ptr2 = &mas[2];
    PR(ptrl);
    ptrl++;
    PR(ptrl);
    PR(ptr2);
    ++ptr2;
    PR(ptr2);
    printf("ptr2-ptrl=%d\n", ptr2 - ptrl);
}