#include <iostream>

using namespace std;

int main()
{
    int a,p=1,s=0;
    bool b=true;
    while (b) {
        cin >> a;
        if (a==0) {
            b=false;
        } else {
        s=s+a;
        p=p*a;
        }
    }
    cout << "Yig'indisi: " <<s<< endl;
    cout << "Ko'paytmasi: " <<p<< endl;



//    int a,b,c;
//    cin >>;
//    for (int i=0; i<=; i++) {
//
//
//    }


//    int a,b,c;
//    cin >>;
//    switch () {
//       case 1: cout <<""; break;
//    }



//    int a;
//    cin >> a;
//    int b=a%2;
//    switch (b) {
//        case 1: cout << "toq"; break;
//        case 0: cout << "juft"; break;
//    }

//    float num1, num2;
//    cin >> num1 >> num2;
//    char a;
//    cin >> a;
//    switch (a) {
//
//    case '+': cout << num1 + num2; break;
//    case '-': cout << num1 - num2; break;
//    case '*': cout << num1 * num2; break;
//    case '/': cout << num1 / num2; break;
//    }


//    char a;
//    cin >> a;
//    if (65<=a && 90>=a) { cout << "katta harf"; }
//    else if (97<=a && 122>=a) { cout << "kichik";}
//    else { cout << "None"; }



//    int n;
//    cin >> n;
//    int a1=n/100, a3=n%10, a2=(n/10)%10;
//    if (a1>a2 && a1>a3) {
//        if (a2>a3) {
//            cout << a1*100+a2*10+a3;
//        } else {
//        cout << a1*100+a3*10+a2;
//        }
//    }
//    else if (a2>a1 && a2>a1) {
//        if (a1>a3) {
//            cout << a2*100+a1*10+a3;
//        } else {
//        cout << a2*100+a3*10+a1;
//        }
//    }
//    else if (a3>a1 && a3>a2) {
//        if (a1>a2) {
//            cout << a3*100+a1*10+a2;
//        } else {
//        cout << a3*100+a2*10+a1;
//        }
//    }
    return 0;
}
