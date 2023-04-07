#include <iostream>

using namespace std;

int main()
{
    char belgi;
    int cod;

    cout << "Bitta belgi kiriting: "; cin >> belgi;

    cod = belgi;

    if (48 <= cod && 57 >= cod) {
        cout << "Kiritilgan belgi son.";
    } else if ((65 <= cod && 90 >= cod) || (97 <= cod && 122 >= cod)) {
        cout << "Kiritilgan belgi harf.";
    } else {
        cout << "Kiritilgan belgi harf ham, son ham emas!";
    }

    return 0;
}
