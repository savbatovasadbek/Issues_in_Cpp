#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "N ni kiriting: ";
    cin >> N;
    string result = "";
    if (N % 3 == 0) {
        result += "Fizz";
    }

    if (N % 5 == 0) {
        result += "Buzz";
    }
    cout << result << endl;
    return 0;
}
