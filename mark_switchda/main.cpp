#include <iostream>

using namespace std;

int main()
{
    int mark;
    cout << "Enter your mark: "; cin >> mark;
    switch (mark) {
    case 2: cout << "1-59"; break;
    case 3: cout << "60-74"; break;
    case 4: cout << "75-85"; break;
    case 5: cout << "86-100"; break;
    default: cout << "Failed!";
    }
    return 0;
}
