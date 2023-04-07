#include <iostream>

using namespace std;

int palindrom (int n)
{
    int num, n1, newNum;
    num = n;
    while (n > 0) {
        n1 = n % 10;
        newNum = (newNum * 10) + n1;
        n = n / 10;
    }
    if (num == newNum) {
        cout << "Bu son palindrom.";
    } else {
        cout << "Bu son palindrom emas!";
    }
}

int main()
{
    int num, n, n1, newNum;
    cout << "Sonni kiriting: ";
    cin >> n;

    palindrom(n);

    return 0;
}
