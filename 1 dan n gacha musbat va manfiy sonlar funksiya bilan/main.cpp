#include <iostream>

using namespace std;

bool isPositive (int num)
{
    if (num > 0 ) {
        return 1;
    } else {
        return 0;
    }
}

int readNumbers (int num)
{
    int positive = 0, newNum = num, i = 1;

    do {
        cout << "Enter the number " << i << ": ";
        cin >> num;

        if (isPositive(num)) {
            positive++;
        }
        i++;
    }
    while (i <= newNum);

    return positive;
}

int main()
{
    int num;
    cout << "--------------------------------------------\n";
    cout << "How many numbers are you going to enter: " ;
    cin >> num;
    cout << "--------------------------------------------\n";

    if (num > 0) {

        int numberPositive = readNumbers(num);

        cout << "--------------------------------------------\n";
        cout << "           Out of " << num << " numbers entered:\n";
        cout << "\t\t" << numberPositive << " are positive.\n";
        cout << "--------------------------------------------\n";

    }
    else {
        cout << "You entered the wrong number!\n";
        cout << "--------------------------------------------\n";
    }

    return 0;
}




