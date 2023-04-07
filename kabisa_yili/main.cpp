#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "Enter year: "; cin >> year;
    if (year % 4 != 0) {
        cout << "Normal year";
    } else if (year % 100 == 0 && year % 400 != 0) {
        cout << "Normal year";
    } else {
        cout << "Leap year";
    }
    return 0;
}
