#include <iostream>

using namespace std;

int main()
{
    int num, numDigits = 0;
    cout << "Enter number: "; cin >> num;
    int numNew = num;
    if (num < 0) { num *= -1; }
    while (num > 0) {
        numDigits++;
        num /= 10;
    }
    cout << "Berilgan " << numNew << " son " << numDigits << " xonali!\n";
    return 0;
}
