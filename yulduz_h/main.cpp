#include <iostream>

using namespace std;

int main()
{
    int N, k=1, t=1;
    cout << "N ni kiriting: "; cin >> N;
    while (k<=N) {
        for (int j=1; j<=N-k; j++){ cout <<" "; }
        for (int i=1; i<=t; i++) { cout << "*"; }
        k++; t += 2; cout << endl;
    } ----k; t-=4;
    while (k>=1) {
        for (int j=1; j<=N-k; j++){ cout <<" "; }
        for (int i=1; i<=t; i++){ cout << "*"; }
        k--; t -= 2; cout << endl;
    }
    return 0;
}
