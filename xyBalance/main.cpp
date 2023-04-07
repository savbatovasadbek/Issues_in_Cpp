#include <iostream>
#include <string>

using namespace std;

bool xyBalance(string text) {
    bool result = true;

    int len = text.length();

    for (int i=0; i < len; i++) {
        if (text[i] == 'y') {
            result = true;
        }
        if (text[i] == 'x') {
            result = false;
        }
    }
    return result;
}

int main()
{
    string text = "aaxbby";

    cout << boolalpha << xyBalance(text);

    return 0;
}

