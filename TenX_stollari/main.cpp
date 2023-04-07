#include <iostream>

using namespace std;

int main()
{
    int room1, room2, room3, desk;
    cin >> room1 >> room2 >> room3;
    desk = (room1 + room2 + room3) / 2;
    cout << desk;
    return 0;
}
