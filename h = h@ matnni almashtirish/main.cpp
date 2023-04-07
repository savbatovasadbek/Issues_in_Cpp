/*
Parametr sifatida bitta stringni qabul qiladigan
function yarating. Agar parametr sifatida kelgan
string uzunligi 2 dan katta bolsa boshidagi 2 da indexdagi
elementni qaytaring, yetmasdan qolgan elementlar o'rniga @ ni qo'yib qaytaring

hello => he
h => h@
*/

#include <iostream>
#include <string>

using namespace std;

//string result (string text) {
//    string newText = "";
//
//   if (isblank(text[0]) or text.length() == 0) {
//        newText += '@';
//   } else {
//        newText += text[0];
//   }
//
//   if (isblank(text[1]) or text.length() == 1 or text.length() == 0) {
//        newText += '@';
//   } else {
//        newText += text[1];
//   }
//   return newText;
//}

int main()
{
    string text, newText = "";

    cout << "Enter text: "; getline(cin, text);

    if (isblank(text[0]) or text.length() == 0) {
        newText += '@';
    } else {
        newText += text[0];
    }

    if (isblank(text[1]) or text.length() == 1 or text.length() == 0) {
        newText += '@';
    } else {
        newText += text[1];
    }

    cout << "Result: " << newText;

    return 0;
}
