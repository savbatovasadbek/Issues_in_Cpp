#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int num, max, idx;
    cout << "Enter number: "; cin >> num;
    int numbers[num]; // 10 - - >  A[10] ---> A[0], A[1], ..... A[10]

    for (int i=1; i <= num; i++) {
       numbers[i] = rand() % 100; // A[9] = 49;
       cout << "numbers[" << i << "]=" << numbers[i] << endl;
        if (numbers[i] > max) {
            max = numbers[i];
            idx = i;
        }
    }

    cout << "max=" << max << endl;
    cout << "Indeksi " << idx;

    return 0;
}
