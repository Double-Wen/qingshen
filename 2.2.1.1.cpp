#include <iostream>
using namespace std;

int main()
{
    int n = 3 * 2 + 1;
    int m = (n > 6) && (n < 8);
    n = n + 2;
    cout << n << " " << m << endl;
    return 0;
}

