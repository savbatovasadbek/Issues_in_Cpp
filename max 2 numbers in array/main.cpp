#include <iostream>
#include <time.h>

using namespace std;

int main()
{
//    srand(time(NULL));
//    int num;
//    cout << "Nechta o'quvchi bor guruhda: "; cin >> num;
//
//    double examResult[100], max = -1, max2 = -1;
//
//    for (int i = 0; i < num; i++) {
//        examResult[i] = rand() % 190;
//        cout << i << "-o'quvchining bali: " << examResult[i] << endl;
//        if (examResult[i] > max) {
//            max = examResult[i];
//        }
//    }
//
//    for (int i = 0; i < num; i++) {
//        if (examResult[i] > max2 && examResult[i] != max) {
//            max2 = examResult[i];
//        }
//    }
//
//    cout << "Max One = " << max << endl;
//    cout << "Max Two = " << max2 << endl;

//////////////////////////////////////////////////////////////////////////////////////////////////////

    srand(time(NULL));
    int num = 7;
    cout << "Nechta o'quvchi bor guruhda: "; cin >> num;

    double examResult[num];

    for (int i = 0; i < num; i++) {
        examResult[i] = rand() % 190;
        cout << i << "-o'quvchining bali: " << examResult[i] << endl;
    }

    cout << "===========================================================\n";

    for (int i = 0; i < num; i++) {
        for(int j = i + 1; j < num; j++) {
            if(examResult[j] < examResult[i]) {
                swap(examResult[i], examResult[j]);
            }

            for (int k = 0; k < num; k++) {
                cout << examResult[k] << "\t";
            }
            cout << endl;
        }
    }

    cout << "===========================================================\n";

    for (int i = 0; i < num; i++) {
        cout << "examResult[" << i << "] = " << examResult[i] << endl;
    }

    return 0;
}
