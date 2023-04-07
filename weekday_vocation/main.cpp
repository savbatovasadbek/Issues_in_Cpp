#include <iostream>

using namespace std;

int main()
{
    bool vocation = true;
    bool weekday = true;
    if (weekday == true) {
        if (vocation == true)
        {
            cout << boolalpha << true;
        } else { cout << boolalpha << false; }
    } else {
        cout << boolalpha << true;
    }
    return 0;
}
