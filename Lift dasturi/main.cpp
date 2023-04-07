#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int b = 1,c = 1;

    do {
        int a = rand() % 10 + 1;
        cout<< " Lift " << a << "-qavatda." << endl;

        cout << " Siz qaysi qavatdasiz: --> "; cin >> b;

        if (a > b) {
            for (int i = a; i >= b; i--) {
                cout << " |" << i << "|\t";
            }
            cout << endl << " Marhamat chiqing!\n";
        }
        else if (a < b) {
            for (int i = a; i <= b; i++) {
                cout << " |" << i << "|\t";
            }
            cout << endl << " Marhamat chiqing!\n";
        }
        else if (a == b) {
            cout << " Marhamat chiqing!\n";
        }

        cout << " Qaysi qavatga borasiz: --> "; cin >> c;

        if (b > c) {
            for (int i = b; i >= c; i--) {
                cout << " |" << i << "|\t";
            }
            cout << endl << " Marhamat tushing!\n";
        }
        else if (b < c) {
            for (int i = b; i <= c; i++) {
                cout << " |" << i << "|\t";
            }
            cout << endl << " Marhamat tushing!\n";
        }
        else if (c == b) {
            cout << " Marhamat tushing!\n";
        }
        cout << "========================================================\n";
    } while (c != 0 && b != 0);

    return 0;
}
