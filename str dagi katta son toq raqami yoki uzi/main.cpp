#include <iostream>

using namespace std;

string foo (string a) {
    int num, maxi = 1, emptyi = 0, digit;

    num = stoi(a);

    if (num % 2 == 1)
        return to_string(num);

    while (num > 0) {
        digit = num % 10;

        if (digit % 2 == 1) {
            if (maxi < digit) {
                emptyi++;
                maxi = digit;
            }
        }
        num /= 10;
    }

    if (emptyi == 0) {
        return "";
    } else {
        return to_string(maxi);
    }
    return "";
}

int main()
{
    string num;

    cout << "Enter number: "; cin >> num;

    cout << "Result: " << foo(num) << endl;

    return 0;
}
