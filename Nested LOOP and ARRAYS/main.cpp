#include <iostream>

using namespace std;

int main()
{
    int res[] = {};
    int num = 0, sum = 0;

    for (int i = 2; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << i << " * " << j << " = ";
            cin >> res[num];
            sum += res[num];
            num++;
        }
    }

    cout << "Result: " << sum;

    return 0;
}
