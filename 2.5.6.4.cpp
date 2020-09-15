#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char buff1[50];
    char buff2[50];
    fgets(buff1, 50, stdin);
    fgets(buff2, 50, stdin);
    buff1[strlen(buff1)-1]='\0';
    buff2[strlen(buff2)-1]='\0';
    cout << buff1 << endl;
    cout << buff2 << endl;
    strcat(buff1, buff2);
    cout << buff1 << endl;
    return 0;
}

