
/* String Tasks
TenXApril 03, 2023
*/

#include <iostream>
#include <string.h>

using namespace std;


int main()
{
///////////////////////////////////////////////////////////////////////////////////////////////////////
    /*
    1. Foydalanuvchi tomonidan kiritilgan matnni dastlabki
    2 ta belgisin qaytaruvchi dastur tuzing.
    */

//    string text;
//    cout << "Enter text: ";
//    getline(cin, text);
//    cout << "Result: " << text.assign(text,0,2);

///////////////////////////////////////////////////////////////////////////////////////////////////////
    /*
    2.   Foydalanuvchi tomonidan kiritilgan matnni oxirgi 2 ta belgsini olib,
    uni uch marta takrorlash natijasida hosil
    bo'lgan matnni qaytaruvchi dastur tuzing.
    */

//    string text;
//    cout << "Enter text: ";
//    getline(cin, text);
//    cout << "Result: ";
//    int len = text.length();
//    for(int i=0; i < 3; i++) {
//        if (len >= 2) {
//            cout << text[len-2];
//            cout << text[len-1];
//        }
//        if (len == 1) {
//            cout << text[len-1];
//        }
//    }

///////////////////////////////////////////////////////////////////////////////////////////////////////
    /*
    3.     Foydalanuvchi tomonidan kiritilgan matnni boshi va oxirgi
    belgilarini olib tashlash natijasida holsil
    bo'lgan matnni  qaytaruvchi dastur tuzing.
    */

//    string text;
//    cout << "Enter text: ";
//    getline(cin, text);
//    int len = text.length();
//    if (len >= 2) {
//        text.erase(0,1);
//        text.erase(len - 2, 1);
//        cout << "Result: " << text;
//    } else {
//        cout << "Result: ";
//    }

///////////////////////////////////////////////////////////////////////////////////////////////////////
    /*
    4.   Foydalanuvchi tomonidan 2 ta matn qabul qilib olinadi.
    "short+long+short" formatda ya'ni uzun matn qisqa matnlar orasiga
    yozish orqali hosil bo'lgan matnni qaytaruvchi dastur tuzing.
    */

//    string textOne, textTwo;
//    cout << "Enter text one: "; getline(cin, textOne);
//    cout << "Enter text two: "; getline(cin, textTwo);
//
//    int lenOne = textOne.length();
//    int lenTwo = textTwo.length();
//
//    if (lenOne > lenTwo) {
//        cout << "Result: " << textTwo + textOne + textTwo;
//    } else {
//        cout << "Result: " << textOne + textTwo + textOne;
//    }

///////////////////////////////////////////////////////////////////////////////////////////////////////
    /*
    5.    Foydalanyuvhi tomonidan 2 ta matn qabul qilib olinadi. Bu matnlarning
    1-chi belgisini olib tashlab qo'shilishi natijasida hosil
    bo'lgan matnni qaytaruvchi datur tuzing.
    */

//    string textOne, textTwo;
//    cout << "Enter text one: "; getline(cin, textOne);
//    cout << "Enter text two: "; getline(cin, textTwo);
//    int lenOne = textOne.length();
//    int lenTwo = textTwo.length();
//    if (lenOne >= 1 && lenTwo >= 1) {
//        textOne.erase(0,1);
//        textTwo.erase(0,1);
//        cout << "Result: " << textOne + textTwo;
//    } else {
//        cout << "Result: ";
//    }

///////////////////////////////////////////////////////////////////////////////////////////////////////
    /*
    6.   Foydalanuvchi tomonidan kiritilgan matinni boshidagi 2 ta belgini oxiriga
    o'tkazish natijasida hosil bo'lgan matnni qaytaruvchi dastur tuzing.
    */

//    string text;
//    cout << "Enter text: ";
//    getline(cin, text);
//    int len = text.length();
//    if (len <= 2) {
//        cout << "Result: " << text;
//    } else {
//        cout << "Result: ";
//        for (int i = 2; i < len; i++) {
//            cout << text[i];
//        }
//        cout << text[0];
//        cout << text[1];
//    }

///////////////////////////////////////////////////////////////////////////////////////////////////////
    /*
    7.    Foydalanuvchi tomonidan kiritilgan matinni oxiridagi 2 ta
    belgini boshiga o'tkazish natijasida
    hosil bo'lgan matnni qaytaruvchi dastur tuzing.
    */

//    string text;
//    cout << "Enter text: ";
//    getline(cin, text);
//    int len = text.length();
//    if (len <= 2) {
//        cout << "Result: " << text;
//    } else {
//        cout << "Result: ";
//        cout << text[len-2];
//        cout << text[len-1];
//        for (int i = 0; i < len-2; i++) {
//            cout << text[i];
//        }
//    }

///////////////////////////////////////////////////////////////////////////////////////////////////////
    /*
    8.   Foydalanuvchi tomonidan kiritilgan matin oxiri "ly" so'zi
    bilan tugasa, true qiymat qaytaruvchi,
    aks holda false qiymat qaytaruvchi dastur tuzing.
    */

//    string text;
//    cout << "Enter text: ";
//    getline(cin, text);
//    int len = text.length();
//    if (len <= 1) {
//        cout << "Result: false";
//    } else {
//        if (text[len-2] == 'l' && text[len-1] == 'y') {
//            cout << "Result: true";
//        }
//    }

///////////////////////////////////////////////////////////////////////////////////////////////////////
    /*
    9.   Foydalanuvchi tomonidandan toq uzunlikdagi matn qabul
    qilinadi. Shu matnning o'rtadagi 3 ta belgisini
    qaytaruvchi dastur tuzing. Matn uzunligi 3 dan boshlanadi.
    */

//    string text;
//    cout << "Enter text: ";
//    getline(cin, text);
//    int len = text.length();
//    if (len <= 3) {
//        cout << "Result: " << text;
//    } else {
//        cout << "Result: ";
//        for (int i = len/2 - 1; i <= len/2 + 1; i++) {
//            cout << text[i];
//        }
//    }

///////////////////////////////////////////////////////////////////////////////////////////////////////
    /*
    10.   Foydalanuvchi tomonidan kiritilgan matn tarkibida "bad" so'zi
    borligini aniqlovchi dastur tuzing. Agar mavjud bo'lsa true qiymat
    qaytarsin, aksincha false qiymat qaytarsin.
    */

//    string text;
//    cout << "Enter text: ";
//    getline(cin, text);
//    int len = text.length();
//    if (text.find("bad") >= 0 && text.find("bad") < len) {
//        cout << "Result: true";
//    } else {
//        cout << "Result: false";
//    }

///////////////////////////////////////////////////////////////////////////////////////////////////////
    /*
    11.    Foydalanuvchi tomoindan uzunligi 2 gacha teng bo'lgan matn qabul qilib
    olinadi, agar matn uzunligi 2 ga teng bo'lsa o'zini qaytaradigan, aks holda
    qolgan qismini @ belgi bilan to'ldirib qaytaradigan dastur tuzing.
    */

//    string text, newText = "";
//
//    cout << "Enter text: "; getline(cin, text);
//
//    if (isblank(text[0]) or text.length() == 0) {
//        newText += '@';
//    } else {
//        newText += text[0];
//    }
//
//    if (isblank(text[1]) or text.length() == 1 or text.length() == 0) {
//        newText += '@';
//    } else {
//        newText += text[1];
//    }
//
//    cout << "Result: " << newText;

///////////////////////////////////////////////////////////////////////////////////////////////////////
    /*
    12.    Foydalanyuvhi tomonidan 2 ta matn qabul qilib olinadi. Bu matnlarning
    oxirgi belgilarni birlashtish natijasida hosil bo'lgan matnni qaytaruvchi dastur tuzing.
    Agar kirtilgan matn bo'sh bo'lsa o'rniga @ belgisi qo'yilsin.
    */

//    string textOne, textTwo;
//    cout << "Enter text one: "; getline(cin, textOne);
//    cout << "Enter text two: "; getline(cin, textTwo);
//    int lenOne = textOne.length();
//    int lenTwo = textTwo.length();
//    cout << "Result: ";
//    if (lenOne == 0) {
//        cout << "@";
//    } else {
//        cout << textOne[0];
//    }
//    if (lenTwo == 0) {
//        cout << "@";
//    } else {
//        cout << textTwo[lenTwo - 1];
//    }

///////////////////////////////////////////////////////////////////////////////////////////////////////
    /*
    13.  Foydalanuvchi tomonidan 2 ta matn qabul qilib olinadi. Agar
    birinchi matnning oxirgi belgisi ikkinchi matn birinchi belgsi bilan bir xil bo'lsa,
    belgilardan biri tashlab birlashtirish, aks holda ikkilasini birlashtirish natijasida
    hosil bo'lgan matnni qaytaruvchi dastur tuzing.
    */

//    string textOne, textTwo;
//    cout << "Enter text one: "; getline(cin, textOne);
//    cout << "Enter text two: "; getline(cin, textTwo);
//    int lenOne = textOne.length();
//    int lenTwo = textTwo.length();
//    cout << "Result: ";
//    if (textOne[lenOne-1] == textTwo[0]) {
//        textOne.erase(lenOne - 1, 1);
//        cout << textOne + textTwo;
//    } else {
//        cout << textOne + textTwo;
//    }

///////////////////////////////////////////////////////////////////////////////////////////////////////
    /*
    14.     Foydalanuvchi tomonidan kirtilgan matinning oxirgi ikki belgisini
    almashtirib chiqaruvchi dastur tuzing.
    */

//    string text;
//    cout << "Enter text: ";
//    getline(cin, text);
//    int len = text.length();
//    cout << "Result: ";
//    for (int i = 0; i < len; i++) {
//        for (int j = 0; j < 2; j++) {
//            cout << text[i];
//        }
//    }

///////////////////////////////////////////////////////////////////////////////////////////////////////
    /*
    16.     Foydalanuvchi tomonidan matn qabul qilib
    olinadi. Matn tarkibida necha marotaba
    "hi" so'zini qatnshganini topuvchi dastur tuzing.
    */

//    string text, word;
//    cout << "Enter text: "; getline(cin, text);
//    cout << "Enter word: "; cin >> word;
//
//    int lenText = text.length();
//    int lenWord = word.length();
//    int sum = 0, result = 0;
//
//    int i = 0, j = 0;
//    do {
//        do {
//            if (text[i+j] == word[j]) {
//                sum++;
////                cout << i+j << " " << j << " " << text[i+j] << "\t";
//            }
//            j++;
//        } while (j != lenWord);
////        cout << endl << sum << endl;
//        if (sum == lenWord) {
//            result++;
//            i += lenWord - 1;
//        }
//        sum = 0;
//        j = 0;
//        i++;
//    } while (i != lenText);
//
//    cout << "Result: " << result;

///////////////////////////////////////////////////////////////////////////////////////////////////////
    /*
    17.     Foydalanuvchi tomonidan 2 ta matn kiritiladi.
    Ushbu kirtilgan matnlarning belgilarini ketma-ket birlashtirish natijasida hosil
    bo'lgan matnni qaytaruvchi dastur tuzing.
    */

//    string a, b;
//    cout << "Enter text one: "; getline(cin, a);
//    cout << "Enter text two: "; getline(cin, b);
//
//    string newText = "";
//
//    int len = ((a.length() > b.length()) ? a.length() : b.length());
//
//    for (int i = 0; i < len; i++) {
//        if (i < a.length()) {
//            newText += a[i];
//        }
//        if (i < b.length()) {
//            newText += b[i];
//        }
//    }
//    cout << "Result: " << newText << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////
    /*
    18.     Foydalanuvchi tomonidan matn qabul qilib olinadi.
    Ushbu matn tarkibida x va y miqdorini aniqlab, agar
    ular teng bo'lsa true qiymat qaytaradigan,
    aks holda false qiymat qaytaradigan dastur tuzing.
    */

//    string text;
//    cout << "Enter text: ";
//    getline(cin, text);
//
//    bool result = true;
//
//    int len = text.length();
//
//    for (int i=0; i < len; i++) {
//        if (text[i] == 'y') {
//            result = true;
//        }
//        if (text[i] == 'x') {
//            result = false;
//        }
//    }
//
//    cout << boolalpha << result;

///////////////////////////////////////////////////////////////////////////////////////////////////////

    return 0;
}
