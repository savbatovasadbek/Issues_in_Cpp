#include <iostream>
#include <math.h>

using namespace std;

int firstNumber (int n)
{
    int newNum = n, s=0;

    while (n > 0) {
        s++;
        n /= 10;
    }

    newNum /= pow(10, s-1);
    return newNum;
}

int main()
{
    int n;

    cout << "N ni kiriting: "; cin >> n;

    cout << firstNumber (n) << endl;
    return 0;
}
