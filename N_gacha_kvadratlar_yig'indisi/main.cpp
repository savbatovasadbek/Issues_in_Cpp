#include <iostream>

using namespace std;

int main()
{
    int num, sum;

    cout << "Enter number: "; cin >> num;

    for (int i=1; i<=num; i++) {
        sum += i*i;
    }

    cout << "Sum is " << sum;
    return 0;
}
