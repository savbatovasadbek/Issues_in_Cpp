#include <iostream>

using namespace std;

int main()
{
    int N, M, soni, sum, refund;

// Qaytim uchun o'zgaruvchilar
    int _5yuzlik, _yuzlik;

// Ichimlik narxlari
    int const americano = 500, latte = 300, lemonTea = 200;

// Bizda qaytim uchun bor pullar
    int const pul1 = 500, pul2 = 100;

// Eng avvalo MENYU foydalanuvchiga ko'rinishi uchun uni ekranga chiqaramiz!
    cout << "-------------------------\n";
    cout << "         MENU\n";
    cout << "-------------------------\n";
    cout << "1. Americano (" << americano << " so'm)\n";
    cout << "-------------------------\n";
    cout << "2. Caffe Latte (" << latte << " so'm)\n";
    cout << "-------------------------\n";
    cout << "3. Lemon Tea (" << lemonTea << " so'm)\n";
    cout << "-------------------------\n";

    cout << "Qaysi birini tanlaysiz: "; cin >> N;

    if ( N >= 1 && N <= 3 ) {

// Foydalanuvchiga tushunarli bo'lishi uchun aniqlikdan foydalanish
            int NN = N;
            switch (NN) {
                case 1: {
                    cout << "Nechta Americano olasiz: "; cin >> soni; break;
                    }
                case 2: {
                    cout << "Nechta Caffe Latte olasiz: "; cin >> soni; break;
                    }
                case 3: {
                    cout << "Nechta Lemon Tea olasiz: "; cin >> soni; break;
                    }
                }
// Tekshirish. Foydalanuvchi so'rayotgan miqdorda kofe bor yoki yo'qligi!
        if ( 0 < soni && 10000 > soni ) {
            cout << "Qancha pul berasiz: "; cin >> M;
            switch (N) {
                case 1: {
                   sum =  americano * soni;
                   refund = M - sum;
                   _5yuzlik = refund / pul1;
                   _yuzlik = (refund - _5yuzlik * pul1) / pul2;
                   break;
                }
                case 2: {
                   sum =  latte * soni;
                   refund = M - sum;
                   _5yuzlik = refund / pul1;
                   _yuzlik = (refund - _5yuzlik * pul1) / pul2;
                   break;
                }
                case 3: {
                   sum =  lemonTea * soni;
                   refund = M - sum;
                   _5yuzlik = refund / pul1;
                   _yuzlik = (refund - _5yuzlik * pul1) / pul2;
                   break;
                }
            }

// Mijozning puli kofega yetishi yoki yetmasligini tekshirish
            if ( M >= sum ) {

// Qolgan pul miqdorini tekshirish
                cout << "Sizning qaytimingiz:\n";
                if ( _5yuzlik != 0 ) {
                    cout << _5yuzlik << " ta " << pul1 << " so'mlik.\n";
                }
                if ( _yuzlik != 0 ) {
                    cout << _yuzlik << " ta " << pul2 << " so'mlik.\n";
                }
                if ( _5yuzlik == 0 && _yuzlik == 0 ) {
                    cout << "Sizda qatim mavjud emas!!!\n";
                }

// Foydalanuchida yaxshi taassurot qoldirish uchun qo'shimcha yozuvlar!
                cout << "----------------------------------------------\n";
                cout << "Tashrifingizdan xursandmiz! Yana kelib turing!\n";
                cout << "----------------------------------------------\n";

// Agarda mijozni kofe sotib olish uchun yetarlichi puli bo'lmasa, u holda
            } else {
                cout << "Sizda bunaqa sondagi kofe olish uchun pul mablag'ingi yetarli emas!";
            }

// Agarda mijoz kofelar sonini no'to'g'ri yoki haddan ziyoz kiritsa, u holda
        } else {
            cout << "Biz sizga bunaqa sondagi kofe berolmaymiz!";
        }

// Agarda mijoz MENYU da berilmagan sonni tanlasa, u holda
    } else {
        cout << "Bizda faqat shu ichimlar bor!";
    }

    return 0;
}
