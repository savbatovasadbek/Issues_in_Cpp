#include <iostream>

using namespace std;

int main()
{
    int A,B,C;
    bool res;
    cout << "A="; cin >> A;
    cout << "B="; cin >> B;
    cout << "C="; cin >> C;
    res = (A==B && A!=C)|| (B==C && B!=A) || (A==C && A!=B) ;
    cout << boolalpha << res << endl;
    return 0;
}
