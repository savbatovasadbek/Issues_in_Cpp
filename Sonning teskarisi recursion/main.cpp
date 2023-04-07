#include <iostream>

using namespace std;

int foo (int num, int sum = 0) {
    int r = num % 10;
    if (num == 0) {
        return sum;
    }
    return foo(num / 10, sum * 10 + r);
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Result: " << foo(num);
    return 0;
}
