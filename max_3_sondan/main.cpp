#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, result;
    cout << "Enter number one: "; cin >> num1;
    cout << "Enter number two: "; cin >> num2;
    cout << "Enter number three: "; cin >> num3;
    if ( num1 >= num2 && num1 >= num3 )     {
        result = num1;
    }
    if ( num2 >= num3 && num3 >= num2 ) {
        result = num2;
    }
    if ( num3 >= num1 && num3 >= num2 ) {
        result = num3;
    }
    cout << "The maximum number is " << result;
    return 0;
}
