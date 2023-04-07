#include <iostream>

using namespace std;

int main()
{
    string text;
    int soni = 0;
    cout << "Gapni kiriting: "; getline(cin, text);
    int len = text.length();
    for (int i=0; i < len; i++) {
        if ((text[i] ==  'c' or text[i] ==  'C') and (text[i+1] ==  'a' or text[i+1] ==  'A') and (text[i+2] ==  't' or text[i+2] ==  'T')) { soni++; }
    }
    cout << "Gapda " << soni << " ta ``cat`` so'zi berilgan!" << endl;
    return 0;
}
