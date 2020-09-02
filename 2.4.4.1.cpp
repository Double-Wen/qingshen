#include <iostream>
using namespace std;

int main()
{
    int sum=0;
    for(int i=1; i<=100; i++)
    {
        sum += i;
        if(sum >= 2000)
        {
            break;
        }
    }
    cout << sum << endl;
    sum = 0;
    for(int i=1; i<=100; i++)
    {
        if(i % 2 == 0)
        {
            continue;
        }
        sum += i;
    }
    cout << sum << endl;
    sum = 0;
    for(int i=1; i<=100; i=i+2)
    {
        if(i % 2 == 0)
        {
            continue;
        }
        sum += i;
    }
    cout << sum << endl;
    return 0;
}

