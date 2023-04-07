#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;
    string res = (num1 == num2 && num2 == num3 && num3 == num4) ? "Yes" : "No";
    cout << "Result: " << res;
    return 0;
}
