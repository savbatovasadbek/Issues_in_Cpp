#include <iostream>

using namespace std;

int main()
{
    int num, numOnes = 0;
    cout << "Sonni kiriting: "; cin >> num;
    while (num > 0) {
        int r = num % 2;
        if (r == 1 ) {
            numOnes++;
        }
        num /= 2;
    }
    cout << "Berilgan sonni ikkilikda " << numOnes << " ta ``1`` bor!" << endl;
    return 0;
}
