#include<iostream>

using namespace std;

int main ()
{
    int num, numThree = 0;

    cout << "Enter number: "; cin >> num;

    if (num > 0) {
        for (int i=1; i <= num; i++) {

            int newNum = i;

            while (newNum > 0) {
                int digit = newNum % 10;

                if (digit == 3) {
                    numThree++;
                }
                newNum /= 10;
            }
        }
        cout << "--------------------------------------\n";
        cout << "Number 3 comes up '" << numThree << "' times up to " << num <<".\n";
        cout << "--------------------------------------\n";
    }
    else {
        cout << "--------------------------------------\n";
        cout << "You entered invalid number!\n";
        cout << "--------------------------------------\n";
    }

    return 0;
}
