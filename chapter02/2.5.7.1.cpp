#include <iostream>
using namespace std;

int main()
{
    char buff[100]="123";
    int n=0;
    sscanf(buff, "%d", &n);
    printf("%d\n", n);
    return 0;
}

