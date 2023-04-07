/*
Agar satr berilgan bo'lsa, agar satrdagi "x" dan keyin darhol boshqa "x" bo'lsa, true qiymatini qaytaring.

axxbb => true

axaxax => false
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;

    cout << "Enter text: "; getline(cin, text);

    if (text.find("xx") > 0 && text.find("xx") < text.length()) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}
