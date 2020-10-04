#include <iostream>
using namespace std;

void change(int *p)
{
    *p = 2333;
}

int main()
{
    int a = 1;
    int *p = &a;
    change(p);
    cout << a << endl;
    return 0;
}

