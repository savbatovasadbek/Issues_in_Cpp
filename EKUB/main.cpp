#include <iostream>

using namespace std;

int GCD (int num1,int num2)
{
    int res;
    while (num1 != 0 && num2 != 0) {
            res = num1;
            if (num1 > num2) {
                num1 -= num2;
            } else  {
                num2 -= num1;
            }
        }
        return res;
}

int main()
{
    int num1, num2, res; // GCD - Greatest common denominator
    cout << "Enter number one: "; cin >> num1;
    cout << "Enter number two: "; cin >> num2;

    if (num1 > 0 && num2 > 0) {
        res = GCD (num1, num2);
        cout << "GCD (Greatest common denominator) = " << res;
    } else {
        cout << "Sonlarni xato kiritdingiz!";
    }

    return 0;
}
