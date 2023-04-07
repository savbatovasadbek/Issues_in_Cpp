/*
bitta string parametr qilib oladigan function yarating,
kelgan parametrning dastlabki 2 ta indexdagi elementini qaytarib bering.
Hello => He
ab => ab
*/

#include <iostream>
#include <string>

using namespace std;

string result (string text) {
    return text.assign(text, 0, 2);
}

int main()
{
    string text;

    cout << "Enter text: "; getline(cin, text);

    cout << result(text);

    return 0;
}
