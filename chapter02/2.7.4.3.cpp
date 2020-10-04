#include <iostream>
using namespace std;

void swap(int* &p1, int* &p2)
{
    int* temp = p1;
    p1 = p2;
    p2 = temp;
}

int main()
{
    int a = 1;
    int b = 2;
    int *p1 = &a;
    int *p2 = &b;
    swap(p1, p2);
    cout << *p1 << " " << *p2 << endl;
    cout << a << " " << b << endl;
    return 0;
}

