#include <iostream>

using namespace std;

int main()
{
    string text;
    cout << "Enter text: "; getline(cin, text);
    int i = 0, len = text.length(), sum = 1;

    do {
        if (text[i] == ' ' && text[i+1] == ' ') {
            text.erase(i+1,1);
            --len;
        } else {
            i++;
        }
    } while (i != len);

    for (int i = 0; i < len; i++) {
        if (text[i] == ' ') {
            sum++;
        }
    }

    cout << "Berilgan gapda " << sum << " ta so'z bor!";

    return 0;
}
