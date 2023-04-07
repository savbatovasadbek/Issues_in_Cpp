#include <iostream>

using namespace std;

int main()
{
    int num, res;
    cout << "Enter number: "; cin >> num;
    int num4 = num % 10;
    int num3 = (num / 10) % 10;
    int num2 = (num / 100) % 10;
    int num1 = num / 1000;
    res = num1 * 1000 + num3 * 100 + num2 * 10 + num4;
    cout << "Result: " << res;
    return 0;
}
