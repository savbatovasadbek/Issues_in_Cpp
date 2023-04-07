#include <iostream>
#include <time.h>

using namespace std;

void headline () {
    cout << "====================================\n";
    cout << "      K I N G   B U R G E R\n";
    cout << "====================================\n";
}

void fastFood () {
    cout << "1. TANDIR LAVASH  - - >  25000 so'm\n";
    cout << "------------------------------------\n";
    cout << "2. PITTA  - - - - - - >  30000 so'm\n";
    cout << "------------------------------------\n";
    cout << "3. NON DOG  - - - - - >  15000 so'm\n";
    cout << "------------------------------------\n";
    cout << "4. GAMBURGER  - - - - >  20000 so'm\n";
    cout << "------------------------------------\n";
    cout << "5. PITSA  - - - - - - >  50000 so'm\n";
}

void drinks () {
    cout << "1. PEPSI 1.5 L  - - - >  12000 so'm\n";
    cout << "------------------------------------\n";
    cout << "2. COCO COLA 1.5 L  - >  15000 so'm\n";
    cout << "------------------------------------\n";
    cout << "3. FANTA 1.5 L  - - - >  13000 so'm\n";
    cout << "------------------------------------\n";
    cout << "4. SHARBAT  1 L - - - >  8000 so'm\n";
    cout << "------------------------------------\n";
    cout << "5. COFFEE 1 TA  - - - >  7000 so'm\n";
}

void disert () {
    cout << "1. BANANLI TORT - - - >  50000 so'm\n";
    cout << "------------------------------------\n";
    cout << "2. LIMONLI TORT - - - >  75000 so'm\n";
    cout << "------------------------------------\n";
    cout << "3. QORA O'RMON KEKS - >  30000 so'm\n";
    cout << "------------------------------------\n";
    cout << "4. CHEESECAKE - - - - >  45000 so'm\n";
    cout << "------------------------------------\n";
    cout << "5. SHOKOLADLI TORT  - >  35000 so'm\n";
}

bool check(int a) {
    if (a >= 0 && a < 6) { return false; }
    else { return true; }
}


int main()
{
    int sum = 0, humans = 1, fast = 1, drink = 1, cake = 1, times, drinkNum = 1, tolov, plastic, code;
    do {
        system("cls");
        headline();
        fastFood();
        cout << "====================================\n";
        cout << "         XUSH KELIBSIZ!\n";
        cout << "Qanaqa fastfood yeyishni xohlaysiz?\n";
        cout << "====================================\n";
        if (check(fast)) { cout << "Iltimos, menyuni to'g'ri tanlang!!!\n"; }
        cout << "Buyurtma bering (Yoqmasa nolni tanlang): "; cin >> fast;
    } while (check(fast));

    do {
        cout << "====================================\n";
        if (humans <= 0) { cout << "Kechirasiz! Xato kiritdingiz!!!\n"; }
        cout << "Nechi kishilik bo'lsin: "; cin >> humans;
        if (humans <= 0) {
            system("cls");
            headline();
            fastFood();
            cout << "====================================\n";
            cout << "         XUSH KELIBSIZ!\n";
            cout << "====================================\n";
            cout << "Nima buyurtma berasiz (Yoqmasa nolni tanlang): " << fast << endl;
            }
    } while (humans < 0);

    do {
        system("cls");
        headline();
        drinks();
        cout << "====================================\n";
        cout << "         ICHIMLIKLAR!\n";
        cout << "Qanaqa ichimlik ichishni xohlaysiz?\n";
        cout << "====================================\n";
        if (check(drink)) { cout << "Iltimos, menyuni to'g'ri tanlang!!!\n"; }
        cout << "Buyurtma bering (Yoqmasa nolni tanlang): "; cin >> drink;
    } while (check(drink));

    if (drink != 0) {
        do {
            system("cls");
            headline();
            drinks();
            cout << "====================================\n";
            cout << "         ICHIMLIKLAR!\n";
            cout << "Qanaqa ichimlik ichishni xohlaysiz?\n";
            cout << "====================================\n";
            cout << "Buyurtma bering (Yoqmasa nolni tanlang): " << drink << endl;
            if (drinkNum < 0) { cout << "Iltimos, menyuni to'g'ri tanlang!!!\n"; }
            cout << "Nechta keltiray: "; cin >> drinkNum;
        } while (drinkNum < 0);
    }

    do {
        system("cls");
        headline();
        disert();
        cout << "====================================\n";
        cout << "              TORTLAR!\n";
        cout << "     Disertga nima xohlaysiz?\n";
        cout << "====================================\n";
        if (check(cake)) { cout << "Iltimos, menyuni to'g'ri tanlang!!!\n"; }
        cout << "Buyurtma bering (Yoqmasa nolni tanlang): "; cin >> cake;
    } while (check(cake));

    srand(time(NULL));
    times = rand() % 20;

    system("cls");
    headline();
    cout << "Buyurtmangiz " << times << " daqiqada tayyor bo'ladi!\n";
    cout << "====================================\n";
    cout << "          BUYURTMANGIZ!\n";
    cout << "====================================\n";
    cout << "     KING BURGER\n" << endl;
    cout << "             STOL: 2\n";
    cout << "KASSA N1                     Asadbek\n";
    cout << "HISOB N00023638         NAVBAT N0202\n";
    cout << "SANA. 31.03.23        VAQT. 00:00:00\n";
    cout << "====================================\n";

// Bu yertdan fast food taomlardan biri
    switch (fast) {
        case 0: {
            cout << "1. FAST FOOD tanlamadingiz!";
            break;
        }
        case 1: {
            sum += humans * 25000;
            cout << "1. TANDIR LAVASH " << humans << " x 25000   " << humans * 25000 << endl;
            break;
        }
        case 2: {
            sum += humans * 30000;
            cout << "1. PITTA " << humans << " x 30000   " << humans * 30000 << endl;
            break;
        }
        case 3: {
            sum += humans * 15000;
            cout << "1. NON DOG " << humans << " x 15000   " << humans * 15000 << endl;
            break;
        }
        case 4: {
            sum += humans * 20000;
            cout << "1. GAMBURGER " << humans << " x 20000   " << humans * 20000 << endl;
            break;
        }
        case 5: {
            sum += humans * 50000;
            cout << "1. PITSA " << humans << " x 50000   " << humans * 50000 << endl;
            break;
        }
    }

    cout << "------------------------------------\n";

// Bu yerda buyurtirilgan ichimliklar bor
    switch (drink) {
        case 0: {
            cout << "2. ICHIMLIK tanlamadingiz!";
            break;
        }
        case 1: {
            sum += drinkNum * 12000;
            cout << "2. PEPSI " << drinkNum << " x 12000   " << drinkNum * 12000 << endl;
            break;
        }
        case 2: {
            sum += drinkNum * 15000;
            cout << "2. COCO COLA " << drinkNum << " x 15000   " << drinkNum * 15000 << endl;
            break;
        }
        case 3: {
            sum += drinkNum * 13000;
            cout << "2. FANTA " << drinkNum << " x 13000   " << drinkNum * 13000 << endl;
            break;
        }
        case 4: {
            sum += drinkNum * 8000;
            cout << "2. SHARBAT " << drinkNum << " x 8000   " << drinkNum * 8000 << endl;
            break;
        }
        case 5: {
            sum += drinkNum * 7000;
            cout << "2. COFFEE " << drinkNum << " x 7000   " << drinkNum * 7000 << endl;
            break;
        }
    }

    cout << "------------------------------------\n";

// Bu yerda disertdagi tortlar bor
    switch (cake) {
        case 0: {
            cout << "1. TORT tanlamadingiz!";
            break;
        }
        case 1: {
            sum += 30000;
            cout << "3. BANANLI TORT 1" << " x 30000      30000" << endl;
            break;
        }
        case 2: {
            sum += 15000;
            cout << "3. lIMONLI TORT 1" << " x 15000      30000" << endl;
            break;
        }
        case 3: {
            sum += 20000;
            cout << "3. QORA O'RMON KEKS 1" << " x 20000  30000" << endl;
            break;
        }
        case 4: {
            sum += 50000;
            cout << "3. CHEESECAKE 1" << " x 50000        30000" << endl;
            break;
        }
        case 5: {
            sum += 25000;
            cout << "1. SHOKOLADLI TORT 1" << " x 25000   30000" << endl;
            break;
        }
    }

    cout << "====================================\n";
    cout << "Ustama\n";
    cout << "   +10%........................." << sum * 0.1 << endl;
    cout << "UMUMIY.                      " << sum + sum * 0.1 << endl;
    cout << "          Har bir kishiga:\n";
    cout << " Har bir odamga " << (sum + sum *0.1) / humans << " so'mdan. " << endl;
    cout << "      ======================\n";

    cout << endl;
    headline();
//    do {
        cout << "To'lovni hisobni qanday to'laysiz: \n";
        cout <<"1. Naqt pulda\n";
        cout << "2. Plastik karta orqali\n";
        cout << "Tanlang: "; cin >> tolov;
//    } while (tolov <= 1 || tolov >= 2);

    cout << "      ======================\n" << endl;

    switch(tolov) {
        case 1: {
            cout << "====================================\n";
            cout << "        YANA KELIB TURING!!!\n";
            cout << "====================================\n";
            break;
        }
        case 2: {
            cout << "====================================\n";
            cout << "             H  U  M  O\n";
            cout << "====================================\n";
            cout << "             ODDIY TOVAR\n";
            cout << "           MUXAYYO SIFAT OK\n";
            cout << "     TERMIZ SHAHAR, ALISHER NAVOI\n";
            cout << "                 Y 46-M\n";
            cout << "ID Terminal: 16110051  Nomer raqami 231\n";
            cout << "ID Tashkilot: 01001054083502  Chek 2951\n";
            cout << "            Oplata (PURCHASE)\n";
            cout << "                TASDIQLANDI\n";
            cout << "SUMMA:         " << sum + sum * 0.1 << " UZS\n";
            cout << "Karta: HUMO              Sana: 11/25\n";
            cout << "            986004******8783:01\n";
            cout << "_____________________________________\n";
            cout << "      ======================\n" << endl;
            cout << "====================================\n";
            cout << "        YANA KELIB TURING!!!\n";
            cout << "====================================\n";
            break;
        }
        default: {
            cout << "====================================\n";
            cout << "PULING YO'Q BO'LSA ISHLAB BERASAN!!!\n";
            cout << "====================================\n";
        }
    }
    return 0;
}
