#include <iostream>

using namespace std;

long int homeTask (int num)
{
    int factor = 1, i = 1;

    do {
        factor *= i;
        i++;
    } while (i <= num);
    return factor;
}

int main()
{
    int num;

    cout << "Enter number: "; cin >> num;

    if (num >= 0) {
        long int factor = homeTask(num);
        cout << "Answer: " << factor << endl;
        cout << "Lazy!\n";
    } else {
        cout << "OMG! You even entered the wrong number, lazy!\n";
    }

    return 0;
}
