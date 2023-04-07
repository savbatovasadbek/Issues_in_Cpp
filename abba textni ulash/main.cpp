/*
Parametr sifatida ikkita string qabul qiladigan function yarating masalan
a va b quyidagi ko'rinishda resultatni return qiling
abba
Masalan a = "Hi", b = "Bye";  result => HiByeByeHi
*/

#include <iostream>

using namespace std;

string result (string a, string b) {
    return (a+b+b+a);
}

int main()
{
    string text = "", a, b;

    cout << "Enter text One: "; getline(cin, a);
    cout << "Enter text Two: "; getline(cin, b);

    cout << result(a,b);

    return 0;
}
