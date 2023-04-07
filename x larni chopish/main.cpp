/*
Satr berilgan bo'lsa boshidagi va eng oxiridagi x dan boshqa hamma x larni o'chirgan holatda qaytaring

xxHxix => xHix
abxxxcd => abcd
xabxxxcdx => xabcdx
*/

#include <iostream>

using namespace std;

int main()
{
    string text, newText = "";

    cout << "Enter text: "; getline(cin, text);
    if (text[0] == 'x') { newText += 'x'; }
    for (int i=0; i < text.length(); i++) {
        if (text[i] != 'x') { newText += text[i]; }
    }
    if (text[text.length() - 1] == 'x') { newText += 'x'; }
    cout << "Result: " << newText;
    return 0;
}
