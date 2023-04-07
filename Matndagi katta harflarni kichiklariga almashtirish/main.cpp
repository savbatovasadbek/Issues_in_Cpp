#include <iostream>
#include <ctype.h>

using namespace std;

string turnLow (string text)
{
    int len = text.length();

    for (int i = 0; i < len; i++) {
        if (isupper(text[i])) {
            text[i] = tolower(text[i]);
        }
    }
    return text;
}

int main()
{
    string text;

    cout << "Enter text: "; cin >> text;

    cout << "Result: " << turnLow(text) << endl;
    return 0;
}
