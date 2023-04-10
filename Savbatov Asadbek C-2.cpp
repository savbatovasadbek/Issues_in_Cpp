///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
                    /* Savbatov Asadbek C-2. 5-variant */
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////

/*
    1-masala. O'zgaruvchi
*/

/*
        C++ tilida o'zgaruvchilarni quyidagicha e'lon qilamiz:
    1. type o'zgaruvchiNomi;
        o'zgaruvchiNomi = value;

    2. type o'zgaruvchiNomi = value;

    O'zgaruvchilar o'zida ma'lum bir qiymat saqlaydi. Misol uchun Butun sonlar uchun biz int,
    satr yoki so'z uchun string, mantiqiy uchun bool, belgili o'zgaruvchilar uchun char va haqiqiy sonlarni
    kiritish uchun double yoki floatdan foydalanamiz. Biz o'zimizga kerakli bo'lgan qiymatga to'g'ri
    type beraolishimiz kerak.

    "Meva solinadigan idishga biz suv, suv solinadigan idishga esa meva sololmaymiz. Hammasi o'z joyida,
    o'z o'rnida qo'llanilishi kerak"

    Bundan tashqari, o'zgaruvchi nomlari katta va kichik lotin harflaridan, raqamlardan va "_"(tag chiziqdan)
    dan tashkil topgan bo'lishi kerak. Ammo birinchi belgisi raqam bo'laolmaydi.

    Yuqoridan aytib o'tilgan belgilardan tashqari ?, \, $, .... va shunga o'xshash belgilardan
    o'zgaruvchi nomi sifatida foydalanib bo'lmaydi.

    Qolaversa o'zgaruvchi nomi sifatida C++ ning kalit so'zlaridan ham foydalanish mumkin emas! Misol uchun switch,
    for, break, continue, va hakazolar;

    Endi keling C++ da o'zgaruvchilarni e'lon qilib ko'ramiz:

    int num = 78;
    string text = "Salom";
    char sign = 'A';
    float number = 1.25;
    double number = 10.14;
    bool res = true;

    Bundan tashqari dastur kodi davomida uning qiymati o'zgaruvchining qiymati o'zgarishi xohlamasak, uni
    o'zgarmas sifatida kiritamiz: Misol uchun "pi" raqamini - ->

    const int num = 3.14;
            yoki
    int const num = 3.14;

    Ko'plab dasturlarni yechayotganimizda dastur davomida xatolik bo'lmasligi uchun, dastur boshida
    o'zgaruvchilarga default qiymat beriladi. Misol uchun yig'indini hisoblayotganda sum = 0, ko'paytmani
    hisoblayotganda p = 1 va shunga o'xshash default qiymatlar.

*/


///////////////////////////////////////////////////////////////////////////////////

/*
    2-masala. Switch
*/

/*
        C++ da tanlash operatorida sifatida "switch" operatori qaraladi. Uni shart operatorlari hisoblangan
    if-else va ternarydan keyin o'rganiladi.

    Aynan switch operatorida ham umuman olganda shartni tekshiriladi. Uning umumiy strukturasi quyidagicha:

    switch (condition) {
        case holat 1: {
            dasturlar qatori ..........
            break;
        }
        case holat 2: {
            dasturlar qatori ..........
            break;
        }
        ...............................
        case holat n: {
            dasturlar qatori ..........
            break;
        }
        default: {
            dasturlar qatori ..........
        }
    }

    Switchga kirib kelgan conditionga qarab, xoh u shart bo'lsin, xoh ixtiyoriy o'zgaruvchi, switch o'zini
    ichida berilgan caselardan biriga tushudiganini tanlaydi. Agarda yuqorida keltirilgan keltirilgan birorta
    ham casega tushmasa default ichidagi parametrlar bajariladi.

    Misol uchun kiritilgan raqamga qarab qaysi hafta kuni ekanligini ko'rsatuvchi dastur tuzamiz:

    switch (raqam) {
        case 1: cout << "Dushanba"; break;
        case 2: cout << "Seshanba"; break;
        case 3: cout << "Chorshanba"; break;
        case 4: cout << "Payshanba"; break;
        case 5: cout << "Juma"; break;
        case 6: cout << "Shanba"; break;
        case 7: cout << "Yakshanba"; break;
        default: cout << "Haftada bunday kun yo'q!";
    }

    Agarda biz raqam = 4; deydigan bo'lsak dastur bizga Payshanba ni qaytaradi. Mabodo boshqa son kiritsak
    Haftada bunday kun yo'q! degan natija chiqadi.

    Bundan tashqari bir nechta casega bitta natija to'g'ri kelib qolsa uni quyidagicha ham kiritish mumkin:
    Huddi 4-masaladagidek ...

    switch (num) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5: cout << "Ish kuni :)\n"; break;
        case 6:
        case 7: cout << "Dam olish kuni :) :) :)\n"; break;
        default: cout << "Haftada bunday kun mavjud emas! :(\n";
    }

    Bunda ham dastur kodi bexato ishlayveradi. Sababi case 1 bajarilsa, case 2 ga, case 2 bajarilsa
    case 3 ga va hakazo.

    Bundan tashqari eng mashhur bo'lgan masalalardan biri berilgan sonni so'zlar yordamida yozishda ham
    switchdan foydalaniladi.

*/

///////////////////////////////////////////////////////////////////////////////////

/*
    3-masala. If-else
*/

//#include <iostream>
//
//using namespace std;
//
//int foo (int numOne, int numTwo, int numThree) {
//    int maxi = numOne + numTwo;
//
//    if (maxi < numOne + numThree) {
//        maxi = numOne + numThree;
//    }
//
//    if (maxi < numTwo + numThree) {
//        maxi = numTwo + numThree;
//    }
//    return maxi;
//}
//
//int main()
//{
//    int numOne, numTwo, numThree;
//
//    cout << "Enter first number: "; cin >> numOne;
//    cout << "Enter second number: "; cin >> numTwo;
//    cout << "Enter third number: "; cin >> numThree;
//
//    cout << "Result: " << foo(numOne, numTwo, numThree) << endl;
//
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////
/*
    4-masala. Switch-case
*/

//#include <iostream>
//
//using namespace std;
//
//void foo (int num) {
//    switch (num) {
//        case 1:
//        case 2:
//        case 3:
//        case 4:
//        case 5: cout << "Ish kuni :)\n"; break;
//        case 6:
//        case 7: cout << "Dam olish kuni :) :) :)\n"; break;
//        default: cout << "Haftada bunday kun mavjud emas! :(\n";
//    }
//}
//
//int main()
//{
//    int num;
//
//    cout << "Hafta kunini kiriting: "; cin >> num;
//
//    foo(num);
//
//    return 0;
//}

///////////////////////////////////////////////////////////////////////////////////
/*
    5-masala. Sikl (loop)
*/

//#include <iostream>
//
//using namespace std;
//
//int foo (int num) {
//    int newNum = 0;
//
//    do {
//        int digit = num % 10;
//        newNum = newNum * 10 + digit;
//        num /= 10;
//    } while (num > 0);
//
//    return newNum;
//}
//
//int main()
//{
//    int num, newNum;
//
//    cout << "Enter number: "; cin >> num;
//
//    if (num > 0) {
//        newNum = foo(num);
//
//        if (num == newNum) {
//            cout << "This is \"Palindirom\" number!\n";
//        } else {
//            cout << "This is not \"Palindirom\" number!\n";
//        }
//    } else {
//        cout << "You entered wrong number! :(\n";
//    }
//
//    return 0;
//}

///////////////////////////////////////////////////////////////////////////////////
/*
    6-masala. String
*/

//#include <iostream>
//
//using namespace std;
//
//string foo (string text) {
//    string newText = "";
//
//    int len = text.length();
//
//    for (int i = len - 1; i >= 0; --i) {
//        newText += text[i];
//    }
//    return newText;
//}
//
//int main()
//{
//    string text;
//
//    cout << "Enter text: "; getline(cin, text);
//
//    cout << "Result: " << foo(text) << endl;
//
//    return 0;
//}

///////////////////////////////////////////////////////////////////////////////////
/*
    7-masala. Array
*/

//#include <iostream>
//#include <time.h>
//
//using namespace std;
//
//void foo (int n) {
//    int toq = 0, juft = 0, nol = 0;
//
//    int arr[n];
//
//    for (int i = 0; i < n; i++) {
//        arr[i] = rand() % 100;
//        cout << arr[i] << "\t";
//    }
//
//    for (int i = 0; i < n; i++) {
//        if (arr[i] == 0) {
//            nol++;
//        }
//        else if (arr[i] % 2 == 0) {
//            juft++;
//        }
//        else {
//            toq++;
//        }
//    }
//
//    cout << "\n==========================================\n";
//    cout << "           Berilgan massivda:\n";
//    cout << toq << " ta toq\n";
//    cout << juft << " ta juft\n";
//    cout << nol << " ta nol soni bor!\n";
//    cout << "==========================================\n";
//}
//
//int main()
//{
//    srand(time(NULL));
//
//    int n;
//
//    cout << "Enter n: "; cin >> n;
//
//    foo(n);
//
//    return 0;
//}



