#include <iostream>

using namespace std;

int tub(int n)
{
    int s=0;

    if (n==0) {
        cout << "0 tub ham, murakkab emas!";
    }
    else if (n==1) {
        cout << "1 tub ham, murakkab emas!";
    }
    else if (n < 0) {
        cout << "Manfiy son kiritildi!";
    }
    else {
        for (int i=1; i <= n; i++) {
            if (n % i == 0) {
                s++;
            }
        }
    cout << ((s == 2) ? "Tub" : "Murakkab") << endl;
    }
}

int main()
{
    int n;

    cout << "N="; cin >> n;

    tub(n);

    return 0;
}
