#include <iostream>
#include <time.h>

using namespace std;

string code (string a) {

    string text = "";

    int len = (rand() % 5) + 15;

    for (int i = 0; i < len; i++) {
        int how = rand() % 3;

        switch(how) {
            case 0: {
                int raqam1 = rand() % 9;
                char sign1 = (raqam1 + 48);
                text += sign1;
            }
            case 1: {
                int raqam2 = rand() % 26;
                char sign2 = (raqam2 + 65);
                text += sign2;
            }
            case 2: {
                int raqam3 = rand() % 26;
                char sign3 = (raqam3 + 97);
                text += sign3;
            }
        }
    }
    return text;
}

void headline() {
    cout << "\n\t\t\t\t - - - - - - - >  ASSALOM ALAYKUM  < - - - - - - - \n\n";

    cout << "\t\t\t\t===================================================\n";
    cout << "\t\t\t\t    Bizning so'zlarni shifrlaydigan dasturimizga\n";
    cout << "\t\t\t\t===================================================\n\n";

    cout << "\t\t\t\t - - - - - - - >  XUSH KELIBSIZ!  < - - - - - - - \n\n";

    cout << "Dastur haqida malumotga ega bo'lmasangiz sizga pastki qismda namuna beriladi!\n";
}

int main()
{
    srand(time(NULL));
    string text, kod;
    int n = 0, menu, sum = 0, newN;
    bool res = true;
    string word[10];
    string key[10];

    headline();

    word[0] = "parol";
    key[0] = code("parol");

    cout << "So'z: " << word[0] << endl;
    cout << "Shifrlangani: " << key[0] << endl;

    do {
        cout << endl;
        cout << "\t\t\t\t===================================================\n";
        cout << "1. Yangi so'z kiritish\n";
        cout << "2. Decodlash\n";
        cout << "3. Shifrlagan so'zlarim\n";
        cout << "4. Chiqish\n";
        cout << "Menyuni tanlang: "; cin >> menu;

        if(menu == 4) { res = false; }

        if (menu == 1) {
            n++;
            cout << "So'zni kiriting: "; cin >> text;
            word[n] = text;
            key[n] = code(text);
            cout << "Shifrlangani: " << key[n] << endl;
        }

        if (menu == 2) {
            cout << "Kodni kiriting: "; cin >> kod;
            for (int i=0; i <= n; i++) {
                if (kod == key[i]) {
                    sum++;
                    newN = i;
                }
            }
            if (sum == 1) {
                cout << "So'z: " << word[newN] << endl;
            } else {
                cout << "Sizda bunaqa so'z yo'q!\n";
            }
            sum = 0;
        }

        if (menu == 3) {
            for (int i = 0; i <= n; i++) {
                cout << "Shifrlangan: " << key[i] << endl;
            }
        }
    menu = 4;
    } while (res);

    return 0;
}
