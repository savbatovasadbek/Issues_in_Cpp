#include <iostream>

using namespace std;

int main()
{
    int num, kub=1;

    cout << "Sonni kiriting: "; cin >> num;

    for (int i=1; i<=3; i++) {
        kub *= num;
    }

    cout << "Sonning kubi: " << kub << endl;
    return 0;
}
