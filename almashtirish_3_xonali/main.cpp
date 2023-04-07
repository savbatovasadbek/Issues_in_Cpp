#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter number: "; cin >> num;
    cout << "The result is " << (num%10)*100 + ((num/10)%10)*10 + (num/100) << endl;
    return 0;
}
