#include <iostream>

using namespace std;

int main()
{
    int bornYear, nowYear, age;
    cout << "When were you born: "; cin >> bornYear;
    cout << "Now year: "; cin >> nowYear;
    age=nowYear-bornYear;
    cout << "You are " << age << " years old!";
    return 0;
}
