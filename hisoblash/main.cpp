#include <iostream>

using namespace std;

int main()
{
    string hi = "Hi guys! How are you?";
    cout << hi << endl;
    cout << hi << endl;
    cout << hi << endl;

    cout << "------------------------------------------------------" << endl;

    for (int k=1; k<=10; k+=1)
    {
        cout << hi << "  ";
    }

    cout << endl << "------------------------------------------------------" << endl;

    int num1,num2,num3;
    cout << "  Number one: "; cin >> num1;
    cout << "  Number two: "; cin >> num2;
    cout << "  Yig`indi:" << num1+num2 << endl;
    cout << "  Ayirma:" << num1-num2 << endl;
    cout << "  Ko`paytma:" << num1*num2 << endl;
    cout << "  Bo`linma:" << num1/num2 << endl;
    cout << "  Qoldiq:" << num1%num2 << endl << endl;
    cout << "  Number three: "; cin >> num3;
    cout << "------------------------------------------------------" << endl;
    cout << "| Yig`indi(3 ta):" << num1+num2+num3 << " ga teng.                        |" << endl;
    cout << "------------------------------------------------------" << endl;

    return 0;
}
