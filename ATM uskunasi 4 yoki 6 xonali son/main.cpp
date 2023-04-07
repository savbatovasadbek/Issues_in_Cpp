#include <iostream>

using namespace std;

bool isCorrectFormat (int num)
{
    int digitNum = 0, newNum = num;

    do {
        digitNum++;
        num /= 10;
    }
    while (num > 0);

    if (digitNum == 4 || digitNum == 6) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int num;

    cout << "Enter your password (4 or 6 digit): ";
    cin >> num;

    if (num > 0) {
        if (isCorrectFormat(num)) {
            cout << "The password entered correctly!\n";
        } else {
            cout << "The password entered incorrectly!!!\n";
        }
    } else {
        cout << "Sorry! The password entered incorrectly!!!\n";
    }

    return 0;
}
