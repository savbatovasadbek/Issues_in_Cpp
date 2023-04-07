#include <iostream>
#include <time.h>

using namespace std;

//int foo (int n) {
//    cout << n << endl;
//    if (n == 0) {
//        return 0;
//    }
//    return foo(n-1);
//}
//
//int main()
//{
//    foo(5);
//    return 0;
//}


//int main () {
//    int a, b, c, max;
//
//    cin >> a >> b >> c;
//
//    max = a;
//
//    switch (b > max) {
//        case 1: max = b; break;
//    }
//
//    switch (c > max) {
//        case 1: max = c; break;
//    }
//
//    cout << max;
//
//    return 0;
//}


int main() {
    srand(time(NULL));
     int num, max, ind;

     cout << "Enter number: "; cin >> num;

     int a[num];

     for (int i=0; i < num; i++) {
        a[i] = rand() % 100;

        if (rand() % 2 == 0) {
            a[i] -= rand() % 100;
        }
     }

     max = a[0];

     for (int i=0; i < num; i++) {
        cout << "a[" << i << "]=" << a[i] << endl;
        if (max < a[i]) {
            max = a[i];
            ind = i;
        }
     }

     cout << "Berilgan massivdagi kattasi: " << max << endl;
     cout << "Berilgan massivdagi kattasi indeksi: " << ind << endl;

     return 0;
}


//int foo (int n) {
//    if (n == 0) {
//        return 1;
//    }
//    cout << n << endl;
//    return n * foo(n-1);
//}
//
//int main () {
//
//    cout << foo(5);
//
//    return 0;
//}








