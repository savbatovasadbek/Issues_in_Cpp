#include <iostream>

using namespace std;

bool res (int a, int b) {
    return ((a % 10 == b % 10) ? true : false);
}

int main()
{
    int a, b;
    cout << "Enter numbers: "; cin >> a >> b;
    if  (a > 0 && b > 0) {
        cout << boolalpha << res (a, b) << endl;
    } else {
        cout << "You entered the minus number!" << endl;
    }

    return 0;
}
