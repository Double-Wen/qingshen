#include <iostream>
#include <string>
using namespace std;

int main()
{
    char buff[100];
    fgets(buff, 10, stdin);
    cout << buff << endl;
    char cache[100];
    scanf("%s", cache);
    printf("%s\n", cache);
    return 0;
}

