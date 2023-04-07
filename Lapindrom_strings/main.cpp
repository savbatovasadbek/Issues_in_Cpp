#include <iostream>

using namespace std;
int main()
{
    string text;
    int len, s=0;

    cout << "Enter the string : "; cin >> text;

    len = text.length();
    int a[len], b[len];

    // Textni birinchi yarmini ASCII codi bo'yicha saralash
    for (int i=0; i<(len/2); i++) {
        int belgi = text[i];
        a[i] = belgi;
    }

    for (int i=0; i<(len/2); i++){
        for (int j=i; j<(len/2); j++){
            if (a[i]>a[j]){
                int h=a[i];
                a[i]=a[j];
                a[j]=h;
            }
        }
    }

    // Textni ikkinchi yarmini ASCII codi bo'yicha saralash
    if (len % 2 == 0) {
        for (int i=len/2; i<len; i++) {
            int belgi = text[i];
            b[i] = belgi;
        }

        for (int i=len/2; i<len; i++){
            for (int j=i; j<len; j++){
                if (b[i]>b[j]){
                    int h=b[i];
                    b[i]=b[j];
                    b[j]=h;
                }
            }
        }

    } else {
        for (int i=len/2+1; i<len; i++) {
            int belgi = text[i];
            b[i] = belgi;
        }

        for (int i=len/2+1; i<len; i++){
            for (int j=i; j<len; j++){
                if (b[i]>b[j]){
                    int h=b[i];
                    b[i]=b[j];
                    b[j]=h;
                }
            }
        }
    }

    int i = 0, j;
    if (len % 2 == 0) {
        j = len/2;
    } else {
        j = len/2+1;
    }

    while (i < len/2) {
       if (a[i] == b[j]) {
        s++;
       }
       i++;
       j++;
    }

    if (s == len/2) {
        cout  << "Text is a palindrome";
    } else {
        cout  << "Text is not a palindrome";
    }

    return 0;
}
