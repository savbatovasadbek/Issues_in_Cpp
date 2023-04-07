#include <iostream>

using namespace std;

int main()
{
    int ball;
    cout << "Enter your mark: "; cin >> ball;
    if (ball >= 86 && ball <= 100){
        cout << "Your mark is 5.";
    }
    if (ball >= 70 && ball < 86) {
        cout << "Your mark is 4.";
    }
    if (ball >= 60 && ball < 70) {
        cout << "Your mark is 3.";
    }
    if (ball < 60 && ball > 0) {
        cout << "Your mark is 2 and you fell down!";
    }
    if (ball > 100 || ball < 0) {
        cout << "You entered wrong value!!!";
    }
    return 0;
}
