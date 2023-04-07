
#include<iostream>
#include<math.h>

using namespace std;

int main() {

    int num, daraja, n=0, raqam, onlar, different=0, minuss;
    string res = "";

    cout << "Sonni kiriting: "; cin >> num;

    if (num < 0) { minuss = num; num *= -1; }

    while (num!=0) {
        raqam = num % 10;
        different++;

        daraja = pow(10,n);
        n++;

//        cout << "raqam=" << raqam << ", ";

        if (different == 3 && raqam !=0 ) { res = " yuz" + res; }
        if (daraja == pow(10,3) && raqam != 0) { res = " ming" + res; }
        if (daraja == pow(10,6) && raqam != 0) { res = " million" + res; }
        if (daraja == pow(10,9) && raqam != 0) { res = " milliard" + res; }

        // cout << "different=" << different <<", ";

        if ((different == 1 || different == 3) && raqam != 0 ) {

            switch (raqam) {
                case 1: res = " bir" + res; /*cout << "birlar= bir, "; */break;
                case 2: res = " ikki" + res; /*cout << "birlar= ikki, ";*/ break;
                case 3: res = " uch" + res; /*cout << "birlar= uch, ";*/ break;
                case 4: res = " to'rt" + res; /*cout << "birlar= to'rt, ";*/ break;
                case 5: res = " besh" + res; /*cout << "birlar= besh, ";*/ break;
                case 6: res = " olti" + res; /*cout << "birlar= olti, ";*/ break;
                case 7: res = " yetti" + res; /*cout << "birlar= yetti, "; */break;
                case 8: res = " sakkiz" + res; /*cout << "birlar= sakkiz, ";*/ break;
                case 9: res = " to'qqiz" + res; /*cout << "birlar= to'qqiz, ";*/ break;
            }
        }

        if (different == 2 && raqam != 0 ) {

            switch (raqam) {
                case 1: res = " o'n" + res; /*cout << "o'nlar= o'n, ";*/ break;
                case 2: res = " yigirma" + res; /*cout << "o'nlar= yigirma, ";*/ break;
                case 3: res = " o'ttiz" + res; /*cout << "o'nlar= o'ttiz, "; */break;
                case 4: res = " qirq" + res; /*cout << "o'nlar= qirq, ";*/ break;
                case 5: res = " ellik" + res; /*cout << "o'nlar= ellik, ";*/ break;
                case 6: res = " oltmish" + res; /*cout << "o'nlar= oltmish, "; */break;
                case 7: res = " yetmish" + res; /*cout << "o'nlar= yetmish, ";*/ break;
                case 8: res = " sakson" + res; /*cout << "o'nlar= sakson, ";*/ break;
                case 9: res = " to'qson" + res; /*cout << "o'nlar= to'qson, ";*/ break;
            }
        }

        // cout << "daraja=" << daraja << ", n=" << n << ", ";

        if (different == 3) { different = 0;}

        num /= 10;
//        cout << "NUmber = " << num << endl;

//        cout << res << endl;

    }

    if (minuss == 0) {
        cout << res;
    } else {
        cout << "minus " << res;
    }


    return 0;
}
