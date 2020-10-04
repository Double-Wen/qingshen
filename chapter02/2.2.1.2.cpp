#include <iostream>
using namespace std;

int main()
{
    int n = 12;
    int m = 3;
    n /= m+1;
    m %= 2;
    cout << n << " " << m << endl;
    return 0;
}

