#include <iostream>

using namespace std;

int main()
{
    int S, M;
    int const preMinut = 45;
    bool trust = true;
    cout << "Budilnik soatini kiriting: "; cin >> S;
    while ( trust ) {
        if ( S >= 0 && S <= 23 ) {
            trust = false;
        } else {
            cout << "Budilnik soatini xato kiritdingiz! Qaytadan kiriting! \n";
            cout << "Budilnik soatini kiriting: "; cin >> S;
        }
    }
    trust = true;
    cout << "Budilnik minutini kiriting: "; cin >> M;
    while ( trust ) {
        if ( M >= 0 && M <= 59 ) {
            trust = false;
        } else {
            cout << "Budilnik minutini xato kiritdingiz! Qaytadan kiriting! \n";
            cout << "Budilnik minutini kiriting: "; cin >> M;
        }
    }
    if ( M < preMinut ) {
        M = M+60-preMinut; S -= 1;
    } else {
        M -= preMinut;
    }
    if ( S < 0) {
        S = 23;
    }
    if ( M >= 0 && M <= 9 ) {
        cout << "Budilnik " << S << ":0" << M << " da chalinadi.";
    } else {
        cout << "Budilnik " << S << ":" << M << " da chalinadi.";
    }
    return 0;
}
