#include <iostream>
#include <string>

using namespace std;

//int foo (string text, string word) {
//    int lenText = text.length();
//    int lenWord = word.length();
//    int sum = 0;
//
//    do {
//        int joy = text.find(word);
//        if (joy >= 0 && joy < lenText) {
//            sum++;
//            text.assign(text,joy + lenWord, lenText);
//        } else {
//            lenText = 0;
//        }
//    } while (lenText != 0);
//    return sum;
//}
//
//int main()
//{
//    string text, word;
//
//    cout << "Enter text: "; getline(cin, text);
//    cout << "Enter word: "; cin >> word;
//
//    cout << "Result: " << foo(text, word);
//
//    return 0;
//}



int main()
{
    string text, word;

    cout << "Enter text: "; getline(cin, text);
    cout << "Enter word: "; cin >> word;

    int lenText = text.length();
    int lenWord = word.length();
    int sum = 0, result = 0;

    int i = 0, j = 0;
    do {
        do {
            if (text[i+j] == word[j]) {
                sum++;
//                cout << i+j << " " << j << " " << text[i+j] << "\t";
            }
            j++;
        } while (j != lenWord);
//        cout << endl << sum << endl;
        if (sum == lenWord) {
            result++;
            i += lenWord - 1;
        }
        sum = 0;
        j = 0;
        i++;
    } while (i != lenText);

    cout << "Result: " << result;
    return 0;
}

















