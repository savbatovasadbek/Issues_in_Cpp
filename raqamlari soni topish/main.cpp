#include <iostream>

using namespace std;

int son (int n)
{
    int s = 0;
    if (n < 0) { n *= -1; }

    while (n > 0) {
        s++;
        n /= 10;
    }
    return s;
}

int main()
{
    int n;

    cout << "N ni kiriting: "; cin >> n;

    cout << "Raqamlari soni: " << son(n) << endl;
    return 0;
}
