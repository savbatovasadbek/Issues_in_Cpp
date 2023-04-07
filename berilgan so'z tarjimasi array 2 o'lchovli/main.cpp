#include <iostream>
#include <time.h>
#include <ctype.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int n, newN, answer = 0, choose, inCorrect = 0, a = 0, sum = 100, urinish = 0;
    bool res = true;
    cout << "Nechta so'z kiritasiz: "; cin >> n;
    newN = n;

    string arr[n][2], bar[n][2];

    for (int i = 0; i < n; i++) {
        cout << "Inglichasini kiriting: "; cin >> arr[i][0];
        cout << "O'zbekchasini kiriting: "; cin >> arr[i][1];
    }

    cout << "\t==================\n";
    cout << "\t    Let's go!\n";
    cout << "\t==================\n";

    string word;
    int i = 0;

    do {
        string newWord = "", key = "";
        choose = rand() % 2;
        if (choose == 1) {
            cout << "``" << arr[i][1] << "`` ni Ingliz tilida kiriting: ";
            cin >> word;
            for (int j = 0; j < word.length(); j++) {
                newWord += toupper(word[j]);
            }
            for (int j = 0; j < arr[i][0].length(); j++) {
                key += toupper(arr[i][0][j]);
            }
            if (newWord == key) {
                cout << "true\n";
                answer++;
            } else {
                cout << "false\n";
                inCorrect++;
                string h1 = arr[i][0];
                string h2 = arr[i][1];
                arr[a][0] = h1;
                arr[a][1] = h2;
                a++;
            }
        }

        if (choose == 0) {
            cout << "``" << arr[i][0] << "`` ni O'zbek tilida kiriting: ";
            cin >> word;
            for (int j = 0; j < word.length(); j++) {
                newWord += toupper(word[j]);
            }
            for (int j = 0; j < arr[i][1].length(); j++) {
                key += toupper(arr[i][1][j]);
            }
            if (key == newWord) {
                cout << "true\n";
                answer++;
            } else {
                cout << "false\n";
                inCorrect++;
                string h1 = arr[i][0];
                string h2 = arr[i][1];
                arr[a][0] = h1;
                arr[a][1] = h2;
                a++;
            }
        }

        i++;
        if (i == n) {
            i = 0;
            n = inCorrect;
            inCorrect = 0;
            cout << "\t==================\n";
            cout << "\t    Qolganlari\n";
            cout << "\t==================\n";
            a = 0;
            sum -= 1;
            urinish++;
        }
    } while (answer != newN );

    if (urinish == 0) {
        cout << "Siz " << sum << " ball oldingiz! Very good!!! :)";
    } else {
        cout << "Siz " << urinish << " marta qayta uringaningiz uchun " << sum << " ball oldingiz!";
    }
    return 0;
}

