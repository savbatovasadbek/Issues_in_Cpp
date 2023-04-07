#include <iostream>

using namespace std;

int main()
{
    int num,idx, item;
    bool res = true;
    cout << "Enter number: "; cin >> num;
    cout << "Enter item: "; cin >> item;
    int arr[num];

    for (int i = 0; i < num; i++) {
        cout << "array[" << i << "] = ";
        cin >> arr[i];
    }
    int low = 0, high = num - 1;

    while (res) {
        idx = (low + high) / 2;
        if (item > arr[idx]) {
            for (int i = idx; i <= high; i++) {
                cout << arr[i] << "\t";
            }
            cout << endl;
            low = idx +1;
        }

        else if (item < arr[idx]) {
            for (int i = low; i <= idx; i++) {
                cout << arr[i] << "\t";
            }
            cout << endl;
            high = idx - 1;
        }

        if (item == arr[idx]) {
            res = false;
        }
    }

    cout << idx;

    return 0;
}
