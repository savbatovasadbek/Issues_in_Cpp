#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age: "; cin >> age;
    if (age >= 16)
    {
        cout << "You can get a passport. Congratulation! :)";
    }
    else
    {
        cout << "You cannot get a passport. Sooooo sorry! :(";
    }
    return 0;
}
