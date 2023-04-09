#include <iostream>
#include <time.h>

using namespace std;

void foo (int arr[], int num) {
    srand(time(NULL));
// To create array with random numbers
    for (int i = 0; i < num; i++) {
        arr[i] = rand() % 100;
        if (rand() % 3 == 0)
            arr[i] *= -1;
        cout << arr[i] << "\t";
    }

    cout << "\nResult: \n";
// To sort array with Selection sort
    for (int i = 0; i < num; i++) {
        for (int j = i+1; j < num; j++) {
            if (arr[i] < arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
// To print sorted array
    for (int i = 0; i < num; i++) {
        cout << arr[i] << "\t";
    }
}

int main()
{
    int num;

    cout << "Enter number: "; cin >> num;

    if (num > 0) {
        int arr[num];

        foo(arr, num);
    } else {
        cout << "Sorry! You entered wrong number!";
    }

    return 0;
}
