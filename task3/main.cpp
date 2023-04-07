#include <iostream>

using namespace std;

int main()
{
    int num;
    bool result;
    cout << "Enter number: "; cin >> num;
    result = (20<=num) && (30>=num);
    cout << "The result is " << result << endl;
    return 0;
}
