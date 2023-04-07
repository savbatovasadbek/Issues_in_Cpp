#include <iostream>

using namespace std;

int main()
{
    int num, num1, num2;
    string res="";
    cout << "Birdan yuzgacha oraliqdagi sonni kiriting: ";
    cin >> num;
    if ( num > 0 && num <= 100) {
        num1 = num / 10;
        num2 = num % 10;
        switch (num1) {
            case 1: { res += "o'n "; break; }
            case 2: { res += "yigirma "; break; }
            case 3: { res += "o'ttiz "; break; }
            case 4: { res += "qirq "; break; }
            case 5: { res += "ellik "; break; }
            case 6: { res += "oltmish "; break; }
            case 7: { res += "yetmish "; break; }
            case 8: { res += "sakson "; break; }
            case 9: { res += "to'qson "; break; }
        }
        switch (num2) {
            case 1: { res += "bir"; break; }
            case 2: { res += "ikki"; break; }
            case 3: { res += "uch"; break; }
            case 4: { res += "to'rt"; break; }
            case 5: { res += "besh"; break; }
            case 6: { res += "olti"; break; }
            case 7: { res += "yetti"; break; }
            case 8: { res += "sakkiz"; break; }
            case 9: { res += "to'qqiz"; break; }
            default: { res+= "yuz"; }
        }
        cout << "Natija: " << res;
    } else {
        cout << "Birdan yuzgacha oraliqdagi son kiritilmadi!";
    }
    return 0;
}
