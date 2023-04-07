#include <iostream>

using namespace std;

int main()
{
    char sign;
    cout << "Enter a sign: "; cin >> sign;

    int code = sign;

    if (code >= 97 && code <= 122) {
        sign = (code - 32);
        cout << "Result: " << sign;
    } else {
        cout << "You entered invalid the letter! :(";
    }

    return 0;
}
