#include <iostream>
#include <math.h>

using namespace std;

int taqqoslash (int n)
{
    int newNum = n, s=0;

    while (n > 0) {
        s++;
        n /= 10;
    }

    int n1 = newNum / pow(10, s-1);
    int n2 = newNum % 10;

    cout << ((n1 > n2) ? n1 : n2);
}

int main()
{
    int n;

    cout << "N ni kiriting: "; cin >> n;

    taqqoslash(n);

    return 0;
}
