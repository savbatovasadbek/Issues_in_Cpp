 #include <iostream>

 using namespace std;

 int main()
 {
    int num, soni = 0, sum = 0;
    cout << "Massiv elementlari sonini kiriting: ";
    cin >> num;

    if (num > 0) {
        int arr[num];

        for (int i = 0; i < num; i++) {
            cout << "arr[" << i << "] = ";
            cin >> arr[i];
        }

        cout << "==============================================\n";
        cout << "Berilgan massivdagi tub sonlar: \n";
        cout << "==============================================\n";

        for (int i = 0; i < num; i++) {

            if (arr[i] > 0) {
                for (int j = 1; j <= arr[i]; j++) {
                    if (arr[i] % j == 0) {
                        sum++;
                    }
                }
                if (sum == 2) {
                    cout << "arr[" << i << "] = " << arr[i] << endl;
                    soni++;
                }
                sum = 0;
            }
        }

        if (soni == 0) {
            cout << "==============================================\n";
            cout << "Tub sonlar mavjud emas! :(\n";
            cout << "==============================================\n";
        } else {
            cout << "==============================================\n";
            cout << "Tub sonlar " << soni << " ta.\n";
            cout << "==============================================\n";
        }
    } else {
        cout << "==============================================\n";
        cout << "Massiv elementlari soni xato kiritildi!" << endl;
        cout << "==============================================\n";
    }

    return 0;
 }
