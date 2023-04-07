#include <iostream>

using namespace std;

int main()
{
    string const parol = "0828";
    string userParol;
    int tryNum = 0;
    bool res = true;
    do {
        cout << "Enter your parol: "; cin >> userParol;
        if (userParol == parol) {
            res = false;
            cout << "You are WELCOME!\n";
        }
        if (tryNum == 2) {
            res = false;
            cout << "Sorry! Your plastic blocked!!!\n";
        }
        tryNum++;
    }
    while (res);

    return 0;
}
