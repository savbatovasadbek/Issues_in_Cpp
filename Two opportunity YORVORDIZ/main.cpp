#include <iostream>

using namespace std;

int main()
{
    int num, i=0, answer;
    bool res = true;
    cout << "Enter the answer number: ";
    cin >> num;
    cout << "----------------------------------\n";
    cout << "You have only two opportunity!\n";
    cout << "----------------------------------\n";
    do {
        if (i == 2) {
            break;
        }

        cout << "Enter your answer: ";
        cin >> answer;

        if (answer == num) {
            cout << "----------------------------------\n";
            cout << "You are PERFECT!\n";
            cout << "----------------------------------\n";
            res = false;
        }
        else if (answer < num) {
            cout << "----------------------------------\n";
            cout << "UP\n";
            cout << "----------------------------------\n";
        }
        else if (answer > num) {
            cout << "----------------------------------\n";
            cout << "DOWN\n";
            cout << "----------------------------------\n";
        }
        i++;

    } while (res);

    return 0;
}
