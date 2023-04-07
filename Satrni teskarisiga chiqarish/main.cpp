#include <iostream>

using namespace std;

string turn (string text)
{
    string newText = "";
    int len = text.length();

    for (int i=len-1; i >= 0; i--) {
        newText += text[i];
    }
    return newText;
}

int main()
{
    string text;

    cout << "Enter text: ";
    cin >> text;

    cout << "Result: " << turn(text) << endl;

    return 0;
}
