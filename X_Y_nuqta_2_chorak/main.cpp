#include <iostream>

using namespace std;

int main()
{
    int X,Y;
    bool res;
    cout << "X="; cin >> X;
    cout << "Y="; cin >> Y;
    res = (X<0) && (Y>0);
    cout << boolalpha << res << endl;
    return 0;
}
