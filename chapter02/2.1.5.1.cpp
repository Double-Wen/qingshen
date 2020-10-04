#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 1;
    int n1 = 0;
    int n2 = 0;
    n1 = a++;
    n2 = ++b;
    cout << n1 << endl;
    cout << n2 << endl;
    return 0;
}

