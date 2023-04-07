#include <iostream>

using namespace std;

int main()
{
    int A,B;
    bool res;
    cout << "A="; cin >> A;
    cout << "B="; cin >> B;
    res = (A>9 && A<100) || (B>9 && B<100);
    cout << boolalpha << res << endl;
    return 0;
}
