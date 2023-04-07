#include <iostream>

using namespace std;

int main()
{
    int temp;
    cout << "Tashqaridagi ob-havoni kiriting: "; cin >> temp;
    if ( temp < 0 || temp > 40 ) {
        cout << "Ichkarida o'yna!";
    } else {
        cout << "Tashqarida o'yna!";
    }
    return 0;
}
