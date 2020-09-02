#include <iostream>
using namespace std;

int main()
{
    char buff;
    cin >> buff;
    switch(buff) {
        case 'a':
            cout << "a" << endl;
            break;
        case 'b':
            cout << "b" << endl;
            break;
        case 'c':
            cout << "c" << endl;
            break;
        default:
            cout << "I do not know" << endl;
            break;
    }
    return 0;
}

