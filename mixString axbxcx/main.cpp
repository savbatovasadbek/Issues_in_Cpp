#include <iostream>
#include <string>

using namespace std;

string mixString (string a, string b) {
    string newText = "";

    int len = ((a.length() > b.length()) ? a.length() : b.length());

    for (int i = 0; i < len; i++) {
        if (i < a.length()) {
            newText += a[i];
        }
        if (i < b.length()) {
            newText += b[i];
        }
    }
    return newText;
}

int main()
{
    string a = "", b = "";

    cout << "Result: " << mixString(a,b) << endl;
    return 0;
}
