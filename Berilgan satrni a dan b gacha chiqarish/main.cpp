#include <iostream>

using namespace std;

string func (string text, int a, int b)
{
    string newText = "";
    for (int i = a; i <= a + b; i++) {
        newText += text[i];
    }
    return newText;
}

int main()
{
    string text;
    int a, b;
    cout << "Enter text: "; getline(cin, text);
    cout << "Enter a and b: "; cin >> a >> b;

    cout << func(text, a, b);
    return 0;
}
