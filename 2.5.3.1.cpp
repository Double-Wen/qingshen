#include <iostream>
using namespace std;

int main()
{
    int a[5][6] = {};
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("%d\n", a[i][5]);
    }
    return 0;
}

