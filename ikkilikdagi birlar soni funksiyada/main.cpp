#include <iostream>

using namespace std;

int countOnes (int num)
{
    int numOnes = 0;

    do {
        int digit = num % 2;

        if (digit == 1 ) {
            numOnes++;
        }
        num /= 2;
    }
    while (num > 0);

    return numOnes;
}

int main()
{
    int num;

    cout << "Enter number: "; cin >> num;

    if (num >= 0) {
        cout << "The given number has "  << countOnes(num) << " ones in binary!\n";
    } else {
        cout << "Invalid number entered!\n";
    }

    return 0;
}
