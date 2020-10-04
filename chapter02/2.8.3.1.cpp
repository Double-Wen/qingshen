#include <iostream>
using namespace std;

struct Point {
    int x, y;
    Point() {};
    Point(int _x, int _y): x(_x), y(_y) {};
};

int main()
{
    Point pt = Point(2, 4);
    cout << pt.x << " " << pt.y << endl;
    return 0;
}

