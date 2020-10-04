#include <iostream>
using namespace std;

int main()
{
    double a = 1.23456;
    int b = 100;
    char c[10] = "hello";
    char buff[100];
    sprintf(buff, "%.4f%d%sworld", a, b, c);
    cout << buff << endl;
    return 0;
}

