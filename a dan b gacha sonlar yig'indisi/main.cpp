#include <iostream>

using namespace std;

int sum (int a, int b)
{
    int s = 0;
    for (int i=a; i <= b; i++) {
        s += i;
    }
    return s;
}

int main()
{
    int a, b;

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;

    cout << "S=" << sum(a,b) << endl;
    return 0;
}
