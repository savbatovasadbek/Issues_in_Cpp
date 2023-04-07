#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;
    int result = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);
    cout << "Result: " << result;
    return 0;
}
