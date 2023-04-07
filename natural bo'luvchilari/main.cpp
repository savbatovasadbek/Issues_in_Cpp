#include <iostream>

using namespace std;

int boluvchilar (int n)
{
    for (int i=1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << "\t";
        }
    }
}

int main()
{
    int n;

    cout << "N="; cin >> n;

    boluvchilar(n);

    return 0;
}
