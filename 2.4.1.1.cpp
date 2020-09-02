#include <iostream>
using namespace std;

int main()
{
    int index=1;
    int sum=0;
    while(index <= 100)
    {
        sum += index;
        index++;
    }
    cout << sum << endl;
    cout << index << endl;
    return 0;
}
