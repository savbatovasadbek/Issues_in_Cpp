#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Sonni kiriting: "; cin >> num;

    switch(num % 2) {

        case 0:
            cout << "Kiritilgan son juft.";
            break;

        case 1:
            cout << "Kiritilgan son toq.";
            break;
    }

    return 0;
}
