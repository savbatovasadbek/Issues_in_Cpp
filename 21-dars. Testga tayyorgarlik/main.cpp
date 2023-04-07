///////////////////////////////////////////////////////////////////////////////////////////////////////////

/* Berilgan NxM ikki o'lchamli massivning toq ustunlaridagi juft sonlar yig'indisini topish */

//#include <iostream>
//#include <time.h>
//
//using namespace std;
//
//int main()
//{
//    srand(time(NULL));
//    int n, m, sumOne = 0, sumAll = 0;
//    cout << "n="; cin >> n;
//    cout << "m="; cin >> m;
//    int arr[n][m];
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            int num = rand() % 10;
////            if (num % 3 == 0) num *= (-1);
//            arr[i][j] = num;
//            cout << "array[" << i << "][" << j << "] = " << arr[i][j] << endl;
//        }
//    }
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cout << arr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (arr[j][i] % 2 == 0 && ((i) % 2 == 0)) {
//                sumOne += arr[j][i];
//                sumAll += arr[j][i];
//            }
//        }
//        cout << "S=" << sumOne << "\t";
//        sumOne = 0;
//    }
//
//    cout << "\nSum all = " << sumAll;
//
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////

/* Masala - 2 */

//#include <iostream>
//#include <time.h>
//
//using namespace std;
//
//int main()
//{
//    srand(time(NULL));
//    int n, m, sum = 0;
//    cout << "n="; cin >> n;
//    cout << "m="; cin >> m;
//    int arr[n][m];
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            int num = rand() % 10;
//            arr[i][j] = num;
//            cout << "array[" << i << "][" << j << "] = " << arr[i][j] << endl;
//        }
//    }
//
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (arr[j][i] % 2 == 0 && ((i) % 2 == 0)) {
//                sum += arr[j][i];
//            }
//        }
//    }
//
//    cout << "\nMSum all = " << sum;
//
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////

/* Berilgan massivning toq elementlarini nolga tenglashtirib chop eting */

//#include <iostream>
//#include <time.h>
//
//using namespace std;
//
//int main()
//{
//    srand(time(NULL));
//    int n;
//    cout << "n="; cin >> n;
//    int arr[n];
//    for (int i = 0; i < n; i++) {
//        int num = rand() % 100;
//        arr[i]= num;
//        cout << arr[i] <<"\t";
//    }
//    cout << endl;
//    for (int i = 0; i < n; i++) {
//        if (arr[i] % 2 == 1)
//            arr[i] = 0;
//        cout << arr[i] << "\t";
//    }
//
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////

/* Berilgan satr ichidagi juft sonlar yig'indisini, toq son ko'paytmasini topish. */

//#include <iostream>
//#include <ctype.h>
//#include <string.h>
//
//using namespace std;
//
//int main()
//{
//    int juft = 0, toq = 1;
//    string text;
//    cout << "Enter text: "; getline(cin, text);
//    int len = text.length();
//    for (int i = 0; i < len; i++) {
//        if(isdigit(text[i])) {
//            int num = text[i] - '0';
//            if (num % 2 == 0) { juft += num; }
//            if (num % 2 == 1) { toq *= num; }
//        }
//    }
//    cout << "Juft = " << juft << endl;
//    cout << "Toq = " << toq << endl;
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//#include <iostream>
//#include <ctype.h>
//#include <string.h>
//
//using namespace std;
//
//int main()
//{
//    int unli = 0, undosh = 0;
//    string text;
//    cout << "Enter text: "; getline(cin, text);
//    int len = text.length();
//    for (int i = 0; i < len; i++) {
//        if (isalpha(text[i])) {
//             if (text[i] == 'A' || text[i] == 'a' || text[i] == 'E' || text[i] == 'e' || text[i] == 'I' || text[i] == 'i' || text[i] == 'O' || text[i] == 'o' || text[i] == 'U' || text[i] == 'u') {
//            unli++;
//            } else {
//                undosh++;
//            }
//        }
//    }
//    cout << "Unli = " << unli << endl;
//    cout << "Undosh = " << undosh << endl;
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////

/* Berilgan satrdagi oxirgi n ta belgini n marta chiqarish */

//#include <iostream>
//#include <ctype.h>
//#include <string.h>
//
//using namespace std;
//
//int main()
//{
//    int unli = 0, undosh = 0, n;
//    string text, newText = "";
//    cout << "Enter text: "; getline(cin, text);
//    cout << "Enter n: "; cin >> n;
//    int len = text.length();
//    if (n > len) { n = len; }
//    for (int i = 0; i < n; i++) {
//
//        newText = text.substr(len - n, n);
//        cout << newText;
//    }
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////

/* Berilgan so'zdagi unlilar va undoshlar sonini hech qanaqa switch, if va ternery operatorlarisiz topish. */

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int sign(char a)
//{
//    string unli = "aeiouAEIOU";
//    return (unli.find(a) != -1);
//}
//
//int main()
//{
//    int unli = 0, undosh = 0;
//
//    string text;
//    cout << "Enter text: "; getline(cin, text);
//
//    int len = text.length();
//
//    for (int i = 0; i < len; i++) {
//        unli += sign(text[i]);
//    }
//
//    cout << "Unli = " << unli << endl;
//    cout << "Undosh = " << len - unli << endl;
//
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////

/* Berilgan satrdagi unlilar va undoshlar sonini toping. */

//#include <iostream>
//#include <ctype.h>
//#include <string.h>
//
//using namespace std;
//
//int main()
//{
//    string text, newText = "";
//    int s= 0;
//    cout << "Enter text: "; getline(cin, text);
//    int len = text.length();
//    for (int i = 0; i < len; i++) {
//        text[i] = toupper(text[i]);
//          newText += text[len - 1 - i];
//    }
//
//    for (int i = len - 1; i >= 0; --i) {
//        newText = newText + text[i];
//    }
//
//    if (newText == text) {
//        cout << "Palindrom";
//    } else {
//        cout << "Palindrom emas";
//    }
//
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////

/* Berilgan satrdan "yosh" so'zini yasash mumkin yoki mumkin emasligini aniqlash */

//#include <iostream>
//#include <ctype.h>
//#include <string.h>
//
//using namespace std;
//
//int main()
//{
//    string text;
//    int y = 0,o = 0,s = 0,h = 0;
//    cout << "Enter text: "; getline(cin, text);
//    int len = text.length();
//    for (int i = 0; i < len; i++) {
//        if (text[i] == 'y') {
//            y++;
//        }
//        if (text[i] == 'o') {
//            o++;
//        }
//        if (text[i] == 's') {
//            s++;
//        }
//        if (text[i] == 'h') {
//            h++;
//        }
//    }
//
//    if (y >= 1 && o >= 1 && s >= 1 && h >= 1) {
//        cout << "Yes";
//    } else {
//        cout << "No";
//    }
//
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////

/* Kirilgan so'zni teskarini ekranga chiqarish toki "exit" so'zi kiritilmagunga qadar. */

//#include <iostream>
//#include <ctype.h>
//#include <string.h>
//
//using namespace std;
//
//int main()
//{
//    string text = "";
//
//    while (text != "exit"){
//    cout << "Enter text: "; getline(cin, text);
//    int len = text.length();
//    string newText = "";
//    for(int i = len-1; i >= 0; --i) {
//        newText += text[i];
//    }
//    if (text != "exit")
//        cout << newText << endl;
//    }
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////

/* Berilgan massivning birinchi va oxirgi elementlari qiymatlarini almashtirish. */

//#include <iostream>
//#include <time.h>
//
//using namespace std;
//
//int main()
//{
//    srand(time(NULL));
//    int n;
//    cout << "n="; cin >> n;
//    int arr[n];
//    for (int i = 0; i < n; i++) {
//        int num = rand() % 100;
//        arr[i]= num;
//        cout << arr[i] <<"\t";
//    }
//
//    cout << "\nResult: " <<  endl;
//    swap(arr[0],arr[n-1]);
//
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] <<"\t";
//    }
//    return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

/* Berilgan massivdagi har bir so'zning birinchi harfini katta qilib ekranga chop eting */

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n;
    cout << "n="; cin >> n;
    string arr[n], word;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = "; cin >> word;
        int len = word.length();
        arr[i] = "";
        arr[i] = toupper(word[0]);
        word.erase(0, 1);
        arr[i] += word;
    }
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl; }

    return 0;
}

