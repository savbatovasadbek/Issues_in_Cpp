#include <iostream>

using namespace std;

int main()
{
    int shopping;
    int const productPrice = 10000;
    cout << "How many products did you buy: ";
    cin >> shopping;
    int price = shopping * productPrice;
    if (price > 100000) {
        cout << "In our shopping center, there is an 11% discount for purchases over 100,000 sums.\n";
        price = price - (price * 11) / 100;
    }
    cout << "You have to pay " << price << " sum!\n";
    return 0;
}
