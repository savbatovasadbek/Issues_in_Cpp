#include <iostream>

using namespace std;

int tartiblash (int a, int b)
{
    for (int i=a-b; i <= a+b; i++) {
        cout << i << "\t";
    }
    return 0;
}

int main()
{
    int a, b, s = 0;

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;

    tartiblash(a,b);

    return 0;
}
