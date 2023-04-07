#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    string userName;
    int n, correctAnswer, answer, correctAnswerCount = 0, foiz, ishora;
    cout << "Xurmatli talaba ism, familiyangizni kiriting: "; getline(cin, userName);
    cout << "Yakuniyda nechta savolga javob bermoqchisiz: "; cin >> n;
    for (int i=1; i <= n; i++) {
        int num1 = (rand()) % 100;
        int num2 = (rand()) % 100;
        int ishora = rand() % 4;
        switch (ishora) {
            case 0: {
                correctAnswer = num1 + num2;
                cout << num1 << " + " << num2 << " = "; cin >> answer; break; }
            case 1: {
                correctAnswer = num1 * num2;
                cout << num1 << " * " << num2 << " = "; cin >> answer; break; }
            case 2: {
                correctAnswer = num1 - num2;
                cout << num1 << " - " << num2 << " = "; cin >> answer; break; }
            case 3: {
                correctAnswer = num1 / num2;
                cout << num1 << " / " << num2 << " = "; cin >> answer; break; }
        }

        if (answer == correctAnswer) {correctAnswerCount++;}
    }
    foiz = (100 * correctAnswerCount) / n;
    if (foiz >= 50) {
        cout << userName << "! Siz berilgan " << n << " ta savoldan " << correctAnswerCount << " tasiga javob berib, yakuniyni " << foiz << "% bajarib ``YAKUNIYDAN O`TDINGIZ!!! :) ";
    } else {
        cout << userName << "! Siz berilgan " << n << " ta savoldan " << correctAnswerCount << " tasiga javob berib, yakuniyni " << foiz << "% bajarib ``YAKUNIYDAN YIQILDINGIZ!!! :( ";
    }
    return 0;
}
