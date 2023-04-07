//////////////////////////////////////////////////////////////////////////////////
 /*
 1.
  Haqiqiy sonlardan
  iborat N ta elementli massiv berilgan.
  Massiv elementlarining
  yig'ndisini hisoblovchi dastur tuzing.
  */

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int num, sum = 0;
//    cout << "Massiv elementlari sonini kiriting: ";
//    cin >> num;
//
//    if (num > 0) {
//        double arr[num];
//
//        for (int i = 0; i < num; i++) {
//            cout << "arr[" << i << "] = ";
//            cin >> arr[i];
//            sum += arr[i];
//        }
//
//        cout << "Yig'indi: " << sum << endl;
//
//    } else {
//        cout << "Massiv elementlari soni xato kiritildi!" << endl;
//    }
//
//    return 0;
//}

/////////////////////////////////////////////////////////////////////////////////
 /*
  2.Butun sonlardan iborat N ta
  elementli massiv berilgan.
  Massivda nechta juft, nechta toq
  son borligini aniqlovchi dastur tuzing.
 */

// #include <iostream>
//
// using namespace std;
//
// int main()
// {
//    int num, even = 0, odd = 0;
//    cout << "Massiv elementlari sonini kiriting: ";
//    cin >> num;
//
//    if (num > 0) {
//        int arr[num];
//
//        for (int i = 0; i < num; i++) {
//            cout << "arr[" << i << "] = ";
//            cin >> arr[i];
//
//            if (arr[i] % 2 == 0) {
//                even++;
//            } else {
//                odd++;
//            }
//        }
//
//        cout << "Massivda juft elementlar soni: " << even << endl;
//        cout << "Massivda toq elementlar soni: " << odd << endl;
//
//    } else {
//        cout << "Massiv elementlari soni xato kiritildi!" << endl;
//    }
//
//    return 0;
// }

/////////////////////////////////////////////////////////////////////////////
 /*
  3.Haqiqiy sonlardan iborat N ta
  elementli massiv berilgan. Massivning
  eng kichik elementini aniqlovchi dastur tuzing.
 */

// #include <iostream>
//
// using namespace std;
//
// int main()
// {
//    int num, min;
//    cout << "Massiv elementlari sonini kiriting: ";
//    cin >> num;
//
//    if (num > 0) {
//        int arr[num];
//
//        for (int i = 0; i < num; i++) {
//            cout << "arr[" << i << "] = ";
//            cin >> arr[i];
//        }
//
//        min = arr[0];
//
//        for (int i = 0; i < num; i++) {
//            if (arr[i] < min) {
//                min = arr[i];
//            }
//        }
//
//        cout << "Massivdagi eng kichik element: " << min << endl;
//
//    } else {
//        cout << "Massiv elementlari soni xato kiritildi!" << endl;
//    }
//
//    return 0;
// }

 /////////////////////////////////////////////////////////////////////////////////
 /*
  4.Haqiqiy sonlardan iborat N ta elementli
  massiv berilgan. Massivning eng kichik elementi
  unda necha marta qatnashganini aniqlovchi dastur tuzing.
 */

// #include <iostream>
//
// using namespace std;
//
// int main()
// {
//    int num, min, soni = 0;
//    cout << "Massiv elementlari sonini kiriting: ";
//    cin >> num;
//
//    if (num > 0) {
//        int arr[num];
//
//        for (int i = 0; i < num; i++) {
//            cout << "arr[" << i << "] = ";
//            cin >> arr[i];
//        }
//
//        min = arr[0];
//
//        for (int i = 0; i < num; i++) {
//            if (arr[i] < min) {
//                min = arr[i];
//                soni = 0;
//            }
//            if (arr[i] == min) {
//                soni++;
//            }
//        }
//
//        cout << "Massivdagi eng kichik element: " << min << endl;
//        cout << "Massivdagi eng kichik elementlar soni: " << soni << endl;
//
//    } else {
//        cout << "Massiv elementlari soni xato kiritildi!" << endl;
//    }
//
//    return 0;
// }

  //////////////////////////////////////////////////////////////////////////////////
 /*
 5.65-90 oraliqdagi butun sonlarni o'zida saqlovchi
  N ta elementli
  massiv berilgan. ASCII kodi
  massiv elementlariga mos bo'gan belgilarni
  ekranga chiqaruvchi dastur tuzing.
 */

// #include <iostream>
//
// using namespace std;
//
// int main()
// {
//
//    int arr[26];
//
//    cout << " || Massiv || \t   || ASCII ||\n";
//
//    for (int i = 0; i <= 25; i++) {
//        arr[i] = 65 + i;
//        cout << " arr[" << i << "] = " << (char) arr[i] << "\t- - - > " << 65+i << " < - - -" << endl;
//    }
//
//    return 0;
// }

//////////////////////////////////////////////////////////////////////////////////
 /*
  6.Satrlardan iborat massiv berilgan.
  Uzunlik jihatidan undagi eng qisqa so'zni va uning
  uzunligini aniqlovchi dastur tuzing.
 */

// #include <iostream>
//
// using namespace std;
//
// int main () {
//    int num, idx, min;
//    cout << "Massiv elementlari sonini kiriting: ";
//    cin >> num;
//
//    if (num > 0) {
//
//        string arr[num];
//
//        for (int i = 0; i < num; i++) {
//            cout << "arr[" << i << "] = ";
//            cin >> arr[i];
//        }
//
//        min = arr[0].length();
//
//        for (int i = 0; i < num; i++) {
//            int len = arr[i].length();
//            if (len < min) {
//                min = len;
//                idx = i;
//            }
//        }
//
//        cout << "Eng qisqa so'z: arr[" << idx << "] = " << arr[idx] << endl;
//
//    } else {
//        cout << "Massiv elementlari soni xato kiritildi!" << endl;
//    }
//
//    return 0;
// }

 //////////////////////////////////////////////////////////////////////////////////
 /*
 7.Natural sonlardan iborat N ta elementli massiv berilgan.
  Massivdagi tub sonlarni ekranga chiqaruvchi
  dastur tuzing.
 */

// #include <iostream>
//
// using namespace std;
//
// int main()
// {
//    int num, soni = 0, sum = 0;
//    cout << "Massiv elementlari sonini kiriting: ";
//    cin >> num;
//
//    if (num > 0) {
//        int arr[num];
//
//        for (int i = 0; i < num; i++) {
//            cout << "arr[" << i << "] = ";
//            cin >> arr[i];
//        }
//
//        cout << "==============================================\n";
//        cout << "Berilgan massivdagi tub sonlar: \n";
//        cout << "==============================================\n";
//
//        for (int i = 0; i < num; i++) {
//
//            if (arr[i] > 0) {
//                for (int j = 1; j <= arr[i]; j++) {
//                    if (arr[i] % j == 0) {
//                        sum++;
//                    }
//                }
//                if (sum == 2) {
//                    cout << "arr[" << i << "] = " << arr[i] << endl;
//                    soni++;
//                }
//                sum = 0;
//            }
//        }
//
//        if (soni == 0) {
//            cout << "==============================================\n";
//            cout << "Tub sonlar mavjud emas! :(\n";
//            cout << "==============================================\n";
//        } else {
//            cout << "==============================================\n";
//            cout << "Tub sonlar " << soni << " ta.\n";
//            cout << "==============================================\n";
//        }
//    } else {
//        cout << "==============================================\n";
//        cout << "Massiv elementlari soni xato kiritildi!" << endl;
//        cout << "==============================================\n";
//    }
//
//    return 0;
// }

  //////////////////////////////////////////////////////////////////////////////////
 /*
 8.N x M o'lchamdagi butun sonli massiv berilgan.
  Har bir ustundagi elementlarning yig'indisini aniqlang.
 */

// #include <iostream>
//
// using namespace std;
//
// int main()
// {
//    int n, m, sum = 0;
//    cout << "Massiv satrlari sonini kiriting: "; cin >> n;
//    cout << "Massiv ustunlari sonini kiriting: "; cin >> m;
//
//    if (n > 0 && m > 0) {
//        int arr[n][m];
//
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                cout << "arr[" << i << "][" << j << "] = ";
//                cin >> arr[i][j];
//            }
//        }
//
//        cout << "==============================================\n";
//        cout << "Berilgan massivdagi ustunlar yig'indisi: \n";
//        cout << "==============================================\n";
//
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                cout << arr[i][j] << "\t";
//            }
//            cout << endl;
//        }
//
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                sum += arr[j][i];
//            }
//            cout << "S=" << sum << "\t";
//            sum = 0;
//        }
//        cout << endl;
//
//    } else {
//        cout << "==============================================\n";
//        cout << "Massiv elementlari soni xato kiritildi!" << endl;
//        cout << "==============================================\n";
//    }
//
//    return 0;
// }

//////////////////////////////////////////////////////////////////////////////////
 /*
 9.N x M o'lchamdagi butun sonli massiv berilgan.
  Qaysi ustundagi elementlarning yig'indisi eng kichik ekanligini aniqlang.
 */

// #include <iostream>
//
// using namespace std;
//
// int main()
// {
//    int n, m, sum = 0, min, idx;
//    cout << "Massiv satrlari sonini kiriting: "; cin >> n;
//    cout << "Massiv ustunlari sonini kiriting: "; cin >> m;
//
//    if (n > 0 && m > 0) {
//        int arr[n][m];
//
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                cout << "arr[" << i << "][" << j << "] = ";
//                cin >> arr[i][j];
//            }
//        }
//
//        cout << "==============================================\n";
//        cout << "Berilgan massivdagi ustunlar yig'indisi: \n";
//        cout << "==============================================\n";
//
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                cout << arr[i][j] << "\t";
//            }
//            cout << endl;
//        }
//
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                sum += arr[j][i];
//            }
//            cout << "S=" << sum << "\t";
//            min = sum;
//            sum = 0;
//        }
//        cout << endl;
//
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                sum += arr[j][i];
//            }
//            cout << "S=" << sum << "\t";
//            if (sum < min) {
//                min = sum;
//                idx = i;
//            }
//            sum = 0;
//        }
//
//        cout << "==============================================\n";
//        cout << "Berilgan massivdagi eng kichik " << idx << "-ustun. S=" << min << "\n";
//        cout << "==============================================\n";
//
//    } else {
//        cout << "==============================================\n";
//        cout << "Massiv elementlari soni xato kiritildi!" << endl;
//        cout << "==============================================\n";
//    }
//
//    return 0;
// }

//////////////////////////////////////////////////////////////////////////////////
 /*
 10.N x M o'lchamdagi butun sonli massiv berilgan. Undagi eng kichik elementni aniqlang.
 */
//
//#include <iostream>
//
// using namespace std;
//
// int main()
// {
//    int n, m, min, idxi = 0, idxj = 0;
//    cout << "Massiv satrlari sonini kiriting: "; cin >> n;
//    cout << "Massiv ustunlari sonini kiriting: "; cin >> m;
//
//    if (n > 0 && m > 0) {
//        int arr[n][m];
//
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                cout << "arr[" << i << "][" << j << "] = ";
//                cin >> arr[i][j];
//            }
//        }
//
//        min = arr[0][0];
//
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                if (arr[i][j] < min) {
//                    min = arr[i][j];
////                    idxi = i;
////                    idxj = j;
//                }
//            }
//        }
//
//        cout << "==============================================\n";
//        cout << "Berilgan massivdagi eng kichik element:" << min << "\n"; // arr[" << idxi << "][" << idxj << "] = "
//        cout << "==============================================\n";
//
//    } else {
//        cout << "==============================================\n";
//        cout << "Massiv elementlari soni xato kiritildi!" << endl;
//        cout << "==============================================\n";
//    }
//
//    return 0;
// }

//////////////////////////////////////////////////////////////////////////////////
 /*
 11.Butun sonlardan iborat 7 ta elementli massiv berilgan. Massiv elementlari tasodifiy
  sonlar generatori yordamida aniqlanadi.
  Massiv elementlarini kamayish tartibida tartiblash
  uchun SELECTION SORT asosida har bir qadamni
  alohida-alohida Excel dasturida yozing.
  Tekshirish uchun dastur (.cpp fayl) va excel faylni yuboring.
 */

//#include <iostream>
//#include <time.h>
//
//using namespace std;
//
//int main()
//{
//    srand(time(NULL));
//    int num = 7;
//    cout << "Nechta o'quvchi bor guruhda: "; cin >> num;
//
//    double examResult[num];
//
//    for (int i = 0; i < num; i++) {
//        examResult[i] = rand() % 190;
//        cout << i << "-o'quvchining bali: " << examResult[i] << endl;
//    }
//
//    cout << "======================================================\n";
//
//    for (int i = 0; i < num; i++) {
//        for(int j = i + 1; j < num; j++) {
//            if(examResult[j] < examResult[i]) {
//                swap(examResult[i], examResult[j]);
//            }
//
//            for (int k = 0; k < num; k++) {
//                cout << examResult[k] << "\t";
//            }
//            cout << endl;
//        }
//    }
//
//    cout << "======================================================\n";
//
//    for (int i = 0; i < num; i++) {
//        cout << "examResult[" << i << "] = " << examResult[i] << endl;
//    }
//
//    return 0;
//}

//////////////////////////////////////////////////////////////////////////////////
 /*
 12.Butun sonlardan iborat 7 ta elementli massiv berilgan. Massiv elementlari tasodifiy
  sonlar generatori yordamida aniqlanadi.
  Massiv elementlarini kamayish tartibida tartiblash
  uchun BUBBLE SORT asosida har bir qadamni alohida-alohida
  Excel dasturida yozing.
  Tekshirish uchun dastur (.cpp fayl) va excel faylni yuboring.
 */

 #include <iostream>
 #include <time.h>

 using namespace std;

 int main()
 {
    srand(time(NULL));
    int num = 7;
    cout << "Nechta o'quvchi bor guruhda: "; cin >> num;

    double examResult[num];

    for (int i = 0; i < num; i++) {
        examResult[i] = rand() % 190;
        cout << i << "-o'quvchining bali: " << examResult[i] << endl;
    }

    cout << "======================================================\n";

    for (int i = 0; i < num - 1; i++) {
        for(int j = 0; j < num - 1; j++) {
            if(examResult[j + 1] < examResult[j]) {
                swap(examResult[j], examResult[j + 1]);
            }

            for (int k = 0; k < num; k++) {
                cout << examResult[k] << "\t";
            }
            cout << endl;
        }
    }

    cout << "======================================================\n";

    for (int i = 0; i < num; i++) {
        cout << "examResult[" << i << "] = " << examResult[i] << endl;
    }

    return 0;
 }
