#include <iostream>
using namespace std;

int main()
{
    int foo = 0;
    cin >> foo;
    switch(foo) {
        case 1:
            cout << "a == 1" << endl;
            break;
        case 2:
            cout << "a == 2" << endl;
            break;
        case 3:
            cout << "a == 3" << endl;
            break;
        default:
            cout << "I do not know" << endl;
            break;
    }
    return 0;
}

