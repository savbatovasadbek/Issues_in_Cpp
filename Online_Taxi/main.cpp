#include <iostream>

using namespace std;

int main()
{
    int fare, result;
    cout << "Yo'l haqiqani kiriting: "; cin >> fare;
    result = fare / 1000;
    if (fare % 1000 >= 500) {
        result++;
    }
    result *= 1000;
    cout << "Yo'l haqi: " << result << " so'm.";
    return 0;
}
