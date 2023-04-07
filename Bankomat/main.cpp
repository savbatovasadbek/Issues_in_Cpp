#include <iostream>

using namespace std;

int main()
{
    int parol, newParol, oldParol, checkParol = 5555, tanlov,  telnomer, balans = 5000000, pul, sms;
    cout << "Parolni kiriting: "; cin >> parol;
    if (parol == checkParol) {
        cout << "---------------------------------\n";
        cout << "          MENU\n";
        cout << "---------------------------------\n";
        cout <<"1. Karta ma'lumotlari:\n";
        cout <<"2. SMS xabarnoma:\n";
        cout <<"3. Balans:\n";
        cout <<"4. Naqd pul yechish:\n";
        cout <<"5. Parolni o'zgartirish:\n";
        cout << "---------------------------------\n";

        cout << "Menuni tanlang: "; cin >> tanlov;

        switch (tanlov) {

            case 1: {
                cout << "-------------------------------------------\n";
                cout << "Karta raqamingiz: 8600 4732 9724 1431\n";
                cout << "Karta egasi: Sattorov Sardorbek\n";
                cout << "Muddati: 03/27\n";
                break;
            }

            case 2: {
                cout << "-------------------------------------------\n";
                cout << "Kartangizni SMS xabarnomaga ulamoqchimisiz? \n";
                cout << "1. Ha\n"; cout << "2. Yo'q\n";
                cout << "Amaliyotni amalga oshirasizmi: "; cin >> sms;

                if (sms == 1 || sms == 2) {
                    switch (sms) {

                        case 1: {
                            cout << "-------------------------------------------\n";
                            cout << "Qaysi nomer: +9989"; cin >> telnomer;
                            cout << "Plastik kartoshka +9989" <<telnomer<<" ga ulandi!\n";
                            break;
                        }

                        case 2: {
                            cout << "-------------------------------------------\n";
                            cout << "Amaliyot amalga oshirilmadi!";
                           break;
                        }

                    }
                } else {
                    cout << "Siz noto'g'ri menyuni tanladingiz!\n";
                    cout << "Amaliyotni qaytadan amalga oshiring ...\n";
                }
                break;
            }

            case 3: {
                cout << "-------------------------------------------\n";
                cout << "Sizning balansingiz: " << balans << endl;
                break;
            }

            case 4: {
                cout << "Qancha naqd pul yechmoqchisiz: "; cin >> pul;
                cout << "----------------------------------------------------------------\n";
                if ( pul < balans ) {
                    cout << "``Asaka`` bank amaliyot olish uchun 1% ustama oladi!\n";
                    cout << "Pulingizni oling: " << pul << " so'm.\n";
                    cout << "Sizda " << (balans - (pul + pul * 0.01))<< " so'm qoldi.\n";
                    cout << "----------------------------------------------------------------\n";
                } else {
                    cout << "Sizda amaliyotni amalga oshirish uchun mablag' yetarli emas!\n";
                }
                break;
            }

            case 5: {

                cout << "-------------------------------------------\n";
                cout << "Parolni o'zgartirmoqchimisiz? \n";
                cout << "1. Ha\n"; cout << "2. Yo'q\n";
                cout << "Amaliyotni amalga oshirasizmi: "; cin >> sms;

                if (sms == 1 || sms == 2) {
                    switch (sms) {

                        case 1:  {
                            cout << "-------------------------------------------\n";
                            cout << "Eski parolni kiriting: "; cin >> oldParol;
                            if (oldParol == parol) {
                                cout << "Yangi parolni kiriting: "; cin >> newParol;
                                cout << "-------------------------------------------\n";
                                cout << "Parol muvaffaqiyatli o'zgartirildi!!!\n";
                            } else {
                                cout << "Parolni xato kiritdingiz!\n";
                                cout << "Amaliyotni qaytadan amalga oshiring ...\n";
                            }
                            break;
                        }

                        case 2: {
                            cout << "-------------------------------------------\n";
                            cout << "Amaliyot amalga oshirilmadi!";
                           break;
                        }

                        }
                } else {
                    cout << "Siz noto'g'ri menyuni tanladingiz!\n";
                    cout << "Amaliyotni qaytadan amalga oshiring ...\n";
                }
                break;
            }

            default: {
                cout << "Siz noto'g'ri menyuni tanladingiz!\n";
                cout << "Amaliyotni qaytadan amalga oshiring ...\n";
            }
        }

    } else {
        cout << "Parolni xato kiritdingiz!";
    }
    return 0;
}
