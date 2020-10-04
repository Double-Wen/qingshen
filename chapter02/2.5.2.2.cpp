#include <iostream>
using namespace std;

int main()
{
    int a[10] = {};
    for(int i=0; i<10; i++)
    {
        a[i] = 10-i;
        cout << a[i] << endl;
    }
    for(int i=0; i<10-1; i++)
    {
        for(int j=0; j<10-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i=0; i<10; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}

