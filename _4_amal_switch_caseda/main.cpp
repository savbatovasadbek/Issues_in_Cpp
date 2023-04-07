#include <iostream>

using namespace std;

int main()
{
    float num1, num2, res;
    char amal;

    cout << "Birinchi sonni kiriting: "; cin >> num1;
    cout << "Ikkinchi sonni kiriting: "; cin >> num2;
    cout << "Qanaqa amal bajarmoqchisiz(/, *, +, -, %): "; cin >> amal;

    switch (amal) {

        case '+':
            res = num1 + num2;
            cout << "Natija: " << res;
            break;

        case '-':
            res = num1 - num2;
            cout << "Natija: " << res;
            break;

        case '*':
            res = num1 * num2;
            cout << "Natija: " << res;
            break;

        case '/':
            res = num1 / num2;
            cout << "Natija: " << res;
            break;

        case '%':
            res = int(num1) % int(num2);
            cout << "Natija: " << res;
            break;

        default:
            cout << "Amalni noto'g'ri kiritdingiz!";
    }

    return 0;
}
