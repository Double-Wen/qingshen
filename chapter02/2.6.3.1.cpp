#include <iostream>
using namespace std;

void change(int a[], int b[][5])
{
    a[0]=18;
    a[1]=20;
    a[2]=22;
    b[1][1]=19;
}

int main()
{
    int a[3]={};
    int b[5][5]={};
    change(a, b);
    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << b[1][1] << endl;
    return 0;
}

