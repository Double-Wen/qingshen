#include <iostream>
using namespace std;

int main()
{
    int a[10] = {5, 3, 2, 6, 8, 4};
    for(int i=0; i<10; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
    int b[10];
    for(int i=0; i<10; i++)
    {
        printf("b[%d]=%d\n", i, b[i]);
    }
    int c[10] = {};
    for(int i=0; i<10; i++)
    {
        printf("c[%d]=%d\n", i, c[i]);
    }
    return 0;
}

