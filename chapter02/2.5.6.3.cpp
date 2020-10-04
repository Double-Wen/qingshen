#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char buff1[100];
    char buff2[100];
    fgets(buff1, 100, stdin);
    fgets(buff2, 100, stdin);
    cout << buff1;
    cout << buff2;
    strcpy(buff1, buff2);
    cout << buff1;
    cout << buff2;
    return 0;
}


