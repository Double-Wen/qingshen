#include <iostream>
#define MAX(a, b) ((a)>(b)?(a):(b))
using namespace std;


int main()
{
    int a = 3;
    int b = 5;
    int c = a > b ? 7:11;
    cout << c << endl;
    cout << MAX(a, b) << endl;
    return 0;
}

