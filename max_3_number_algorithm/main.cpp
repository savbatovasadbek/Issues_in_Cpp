#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int num1, num2, num3, result;
    cout << "Enter number one: "; cin >> num1;
    cout << "Enter number two: "; cin >> num2;
    cout << "Enter number three: "; cin >> num3;
    result = max ( { num1, num2, num3 } );
    cout << "The maximum number is " << result;
    return 0;
}
