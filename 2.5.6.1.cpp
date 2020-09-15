#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char buff[100];
    fgets(buff, 100, stdin);
    int len = strlen(buff);
    cout << len << endl;
    cout << buff << endl;
    cout << "Hello World" << endl;
    return 0;
}

