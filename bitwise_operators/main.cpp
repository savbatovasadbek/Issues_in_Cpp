#include <iostream>

using namespace std;

int main()
{
    int num1, num2, res;
    cin >> num1 >> num2;

    res = num1 & num2;
    cout << num1 << " & " << num2 << " = " << res << endl;

    res = num1 | num2;
    cout << num1 << " | " << num2 << " = " << res << endl;

    res = num1 ^ num2;
    cout << num1 << " ^ " << num2 << " = " << res << endl;

    res = ~ num2;
    cout << " ~ " << num2 << " = " << res << endl;

    return 0;
}
