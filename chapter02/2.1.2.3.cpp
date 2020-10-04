#include <iostream>
#include <string>
using namespace std;

int main()
{
    char a = 'z';
    char b = 'j';
    char c = 117;
    printf("%c%c%c\n", a,b,c);
    char buff[100];
    fgets(buff, 100, stdin);
    cout << buff << endl;
    return 0;
}

