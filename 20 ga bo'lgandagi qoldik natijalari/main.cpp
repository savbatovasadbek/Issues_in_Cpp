#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter number: "; cin >> num;

    if (num > 0) {
        cout << boolalpha << ((num % 20 == 19 || num % 20 == 18) ? true : false) << endl;
    } else {
        cout << "You entered the minus number!\n";
    }

    return 0;
}
