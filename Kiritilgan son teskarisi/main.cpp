#include <iostream>

using namespace std;

int teskari(int num)
{
    int newNum = 0;
    while (num > 0) {
        int r = num % 10;
        newNum = newNum * 10 +r;
        num /= 10;
    }
    return newNum;
}

int main()
{
    int num;

    cout << "N="; cin >> num;

    cout << "Natija: "  << teskari(num) << endl;
    return 0;
}
