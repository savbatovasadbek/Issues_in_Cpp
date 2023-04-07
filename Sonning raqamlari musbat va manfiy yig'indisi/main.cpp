#include <iostream>

using namespace std;

int recursion (int n) {
    if (n == 0) {
        return;
    }
    return recursion(n-1);
}

int main()
{
    cout << "Result: " << recursion(10) << endl;
    return 0;
}
