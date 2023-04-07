#include <iostream>

using namespace std;

double check ()
{
    double sum = 0, i = 1, num;
    do {
        cout << "Enter number of " << i << ": ";
        cin >> num;
        sum += num;
        i++;
    } while (num != 0);
    return sum;
}

int main()
{
    double res = check();
    cout << "The sum of the entered numbers is " << res << endl;
    return 0;
}
