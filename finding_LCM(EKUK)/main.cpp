#include <iostream>

using namespace std;

int main()
{
    int multiple=1, num, LCM = 1;

    cout << "Enter number: "; cin >> num;

    for (int i=2; i<=num; i++) {
        LCM *= i;
//        cout << "i=" << i << ", LCM=" << LCM;
        for (int j=1; j<i; j++) {
            if (i % j == 0) {
                multiple *= j;
//                cout << "\t Multiple = " << j;
            }
        }
//        cout << endl;
    }
    LCM /= multiple;
    cout << "LCM ( Least Common Multiple ) = " << LCM;

    return 0;
}
