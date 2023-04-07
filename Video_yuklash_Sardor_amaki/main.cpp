#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int S, C, T, res;
    cin >> S >> C >> T;
    if ((1 < S) && (S > C) && (T < 1000)) {

        res = S / C;
        if (S % C >= (C * 0.5)) {res++;}
        cout << "Sardor amaki "<< res << " sekund kutishi kerak.";

    } else {
        cout << "Qiymatlar xato kiritildi!";
    }

    return 0;
}
