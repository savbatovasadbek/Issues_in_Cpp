#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int num, max, min, idxMax, idxMin;
    cout << "Enter number: "; cin >> num;
    int numbers[num];

    for (int i=1; i <= num; i++) {
       numbers[i] = rand() % 100;
       cout << "numbers[" << i << "]=" << numbers[i] << endl;
    }
    max = numbers[1];
    min = numbers[1];

    for (int i=1; i <= num; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
            idxMax = i;
        }
        if (numbers[i] < min) {
            min = numbers[i];
            idxMin = i;
        }
    }

    cout << "max[" << idxMax << "]=" << max << endl;
    cout << "min[" << idxMin << "]=" << min << endl;
    cout << "Result(max/min): " << max / min;

    return 0;
}
