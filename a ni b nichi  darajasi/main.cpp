#include <iostream>

using namespace std;

int daraja(int a, int b)
{
    int i=1, s=1;
    do {
        s *= a;
        i++;
    }
    while (i<=b);
    return s;
}

int main()
{
    int a, b;

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;

    cout << daraja(a,b);

    return 0;
}
