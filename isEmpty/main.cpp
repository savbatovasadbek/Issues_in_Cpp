#include <iostream>

using namespace std;

//string func (string text)
//{
//    return (text.length() == 0) ? "NO" : "YES";
//}
//
//int main()
//{
//    string text;
//    cout << "Enter text: "; getline(cin, text);
//
//    cout << func(text);
//    return 0;
//}


int main() {
    int num = 0;
    string text;
    cout << "Enter text: "; getline(cin, text);
    string findText;
    cout << "How text find: "; getline(cin, findText);

    for (int i=0; i < text.length(); i++) {
        if (text.find(findText)) {
            num++;
            i = text.find(findText);
        }
    }

    cout << num;

//    if (text.find(findText)) {
//        cout << "Yes[" << text.find(findText) << "]";
//    }
//     else {
//        cout << "No";
//     }

    return 0;
}
