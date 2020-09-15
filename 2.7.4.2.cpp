#include <iostream>
using namespace std;

void swap1(int *a, int *b)
{
    int temp=*a;
    *a = *b;
    *b = temp;
}

void swap2(int *a, int *b)
{
    int *temp;
    int x;
    temp = &x;
    *temp = *a;
    *a = *b;
    *b = *temp;
}

void swap3(int* &a, int* &b)
{
    int *temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5;
    int b = 3;
    swap1(&a, &b);
    cout << a << " " << b << endl;
    int c = 5;
    int d = 3;
    swap2(&c, &d);
    cout << c << " " << d << endl;
    int e = 5;
    int f = 3;
    int *p1 = &e;
    int *p2 = &f;
    swap3(p1, p2);
    cout << e << " " << f << endl;
    return 0;
}

