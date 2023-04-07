#include <iostream>
#include <math.h>

using namespace std;

//int name (string yourName) {
//    cout << "Assalomu alaykum " << yourName << endl;
//}
//
//int main()
//{
//    string yourName;
//
//    cout << "Ismingizni kiriting: "; cin >> yourName;
//
//    name(yourName);
//
//    return 0;
//}



//int sum (int num1, int num2) {
//    return (num1 + num2);
//}
//
//int main () {
//
//    int num1, num2;
//
//    cout << "Enter number one: "; cin >> num1;
//    cout << "Enter number two: "; cin >> num2;
//
//    cout << "Yig'indi: " << sum(num1, num2);
//
//    return 0;
//}


//int modul (int num) {
//    if (num < 0) {
//        num *= -1;
//    }
//    return num;
//}
//
//int main() {
//
//    int num;
//    cout << "Sonni kiriting: "; cin >> num;
//
//    cout << "Sonning moduli: " << modul(num);
//
//    return 0;
//}



//float kvadrat_tenglama (int a, int b, int c) {
//
//    float d = b*b-4*a*c;
//
//    if (d < 0) {
//        cout << "Bu tenglama yechimga ega emas!";
//    }
//    else if (d == 0) {
//        cout << "Bitta yechimga ega: \n";
//        float x = -b / (2*a);
//        cout << "x = " << x;
//    }
//    else {
//        cout << "Tenglama ikkita yechimga ega: \n";
//        float x1 = (-b + sqrt(d)) / (2 * a);
//        float x2 = (-b - sqrt(d)) / (2 * a);
//        cout << "x1 = " << x1 << endl;
//        cout << "x2 = " << x2 << endl;
//    }
//    return 0;
//}
//
//int main ()
// {
//     int a, b, c;
//
//     cout << "a, b,c ni kiriting: "; cin >> a >> b >> c;
//
//     kvadrat_tenglama(a, b, c);
//
//     return 0;
// }



int loop (int a, int b) {

    for (int i=a; i <= b; i++) {
        cout << i << "\t";
    } cout << endl;
    return 0;

}

int main () {

    int a, b;

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;

    loop(a,b);
    loop(b-a, a+b);
    loop(a*b, pow(a,b));

    return 0;
}
















