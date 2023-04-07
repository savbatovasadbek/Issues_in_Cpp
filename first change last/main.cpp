#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, s=0, newNum, last, first, newn;

    cout << "n="; cin >> n;

    newNum = n;
    last = n % 10;

    while (n>0) {
        s++;
        n=n/10;
    }

    first = newNum / pow(10, s-1);

    newn = (newNum - first * pow(10, s-1) +last * pow(10, s-1)) - last + first;

    cout << newn << endl;
    return 0;
}
