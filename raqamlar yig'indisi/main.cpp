#include <iostream>

using namespace std;

int sum (int n)
{
    int s=0;
    while (n > 0) {
        int r = n % 10;
        s += r;
        n /= 10;
    }
    return s;
}

int main() {

    int n, s = 0;

    cout << "N ni kiriting: "; cin >> n;

    cout << "Raqamlari yig'indisi: " << sum(n);

    return 0;
}
