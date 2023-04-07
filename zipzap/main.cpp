#include <iostream>

using namespace std;

int main()
{
    string text, newText = "";
    cout << "Enter text: "; cin >> text;
    int len = text.length();
    bool res = (text[0] != 'z');

    for (int i = 0; i < len; i++) {
        if (text[i] == 'z' && i == 0) {
            newText += "z";
        }
        if (res) {
            newText += text[i];
        }
        if (text[i] == 'z'){
            res = false;
            if (text[i+1] == 'z') {
                res = true;
            }
        }
        if (text[i] == 'p') {
            newText += 'p';
            res = true;
            if (text[i+1] == 'p') {
                res = false;
            }
        }
    }
    cout << "Result: " << newText << endl;
    return 0;
}
