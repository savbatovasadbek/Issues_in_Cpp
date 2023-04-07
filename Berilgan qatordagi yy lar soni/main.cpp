/*
Berilgan qatordagi "yy" sonini hisoblang. Biz bir-birining
ustiga chiqishga ruxsat berilganligini aytamiz,
shuning uchun "yyy" tarkibida 2 ta "yy" mavjud.
*/

#include <iostream>

using namespace std;

int main()
{
    string text;
    int sum = 0;

    cout << "Enter text: "; getline(cin, text);

    for (int i = 0; i < text.length(); i++) {
        if(text[i] == 'y' && text[i+1] == 'y') {
            sum++;
        }
    }

    cout << "Result: " << sum;

    return 0;
}
