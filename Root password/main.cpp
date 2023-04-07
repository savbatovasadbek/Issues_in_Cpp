#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    string parol;

    cout << "Create root password: "; cin >> parol;

    int len = parol.length();
    int upper = 0, num = 0;

    if (len >= 8) {
        cout << "V  Must be at least 8 characters long" << endl;
    } else {
        cout << "X  Must be at least 8 characters long" << endl;
    }

    for (int i=0; i < len; i++) {
            if (isupper(parol[i])) {
                upper++;
            }
            if (isdigit(parol[i])) {
                num++;
            }
    }

    if (upper > 0 && !(isupper(parol[0]) || isupper(parol[len-1]))) {
        cout << "V  Must contain 1 uppercase letter (cannot be first or last character)" << endl;
    } else {
        cout << "X  Must contain 1 uppercase letter (cannot be first or last character)" << endl;
    }

    if (num > 0) {
        cout << "V  Must contain 1 number" << endl;
    } else {
        cout << "X  Must contain 1 number" << endl;
    }

    if (isdigit(parol[len-1]) && (isupper(parol[len-1])|| islower(parol[len-1]))) {
        cout << "V  Cannot end in a number or speacial character" << endl;
    } else {
        cout << "X  Cannot end in a number or speacial character" << endl;
    }

    cout << endl << islower(parol[len-1]);

    return 0;
}
