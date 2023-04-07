#include <iostream>
#include <math.h>

using namespace std;

double resDouble (double num1, char sign, double num2)
{
    switch (sign) {
        case '+': return (num1 + num2); break;
        case '-': return (num1 - num2); break;
        case '*': return (num1 * num2); break;
        case '/': return (num1 / num2); break;
        case '^': return (pow(num1, num2)); break;
    }
}

int main()
{
    double num1, num2, res;
    char sign;

    cout << "Enter an algebraic example: ";
    cin >> num1 >> sign >> num2;
    cout << "------------------------------------\n";

    res = resDouble (num1, sign, num2);

    cout << "Result: " << num1 << " " << sign << " " << num2 << " = " << res << endl;
    cout << "------------------------------------\n";

    return 0;
}
