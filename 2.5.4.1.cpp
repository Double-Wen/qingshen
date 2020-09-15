#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int a[5];
    for(int i=0; i<4; i++)
    {
        printf("%d ", a[i]);
    }
    printf("%d\n", a[4]);
    memset(a, 0, sizeof(a));
    for(int i=0; i<5-1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("%d\n", a[4]);
    int b[5];
    for(int i=0; i<4; i++)
    {
        printf("%d ", b[i]);
    }
    printf("%d\n", b[4]);
    memset(b, -1, sizeof(b));
    for(int i=0; i<4; i++)
    {
        printf("%d ", b[i]);
    }
    printf("%d\n", b[4]);
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    return 0;
}

