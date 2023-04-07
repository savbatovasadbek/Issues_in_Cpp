///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <ctype.h>
using namespace std;
string mobiuzEnglish(bool){
    cout <<"1.About tariffs\n";
    cout <<"2.USSD codes\n";
    cout <<"3.Internet packages\n";
    int tanlov;
    cin >>tanlov;
    switch(tanlov){
    case 1:
        return "1.Omad plus\n2.Mobi 16\n3.Gap yo'q mini\n4.Mobi 20\n5.Gap yo'q optima\n";break;
    case 2:
        return "*100#-Check balance\n*102#-Traffic balance\n*104#-Sms balance\n*150#-My number\n";break;
    case 3:
        return "1.300MB-8000sum\n2.500MB-9000sum\n3.1GB-11000sum\n4.10GB-50000sum\n";break;
    }

}




string uzmobileEnglish(bool){
    cout <<"1.About tariffs\n";
    cout <<"2.USSD codes\n";
    cout <<"3.Internet packages\n";
    int tanlov;
    cin >>tanlov;
    switch(tanlov){
    case 1:
        cout<<"1.Milliy 10\n2.Milliy 15\n3.Milliy 40\n4.Milliy 50\n5.Milliy 70\n";break;
    case 2:
        cout<<"*100#-Management\n*105#-Tariff balance\n*107#-Check account\n*150#-Credit service\n";break;
    case 3:
        cout<<"1.1GB-9000 sum\n2.1.5GB-14000 sum\n3.5GB-25000 sum\n4.12GB-50000 sum\n";break;
    }

}


string funcEnglish(int number){
    string str=to_string(number);
    int xona=str.length();
    if(xona==9){
        if((str[0]=='8' && str[1]=='8') || (str[0]=='9' && str[1]=='7')){
            cout <<"Your number belongs to MOBIUZ.\n";
            cout <<"Do you want to use MOBIUZ services?...\n1.Yes\n2.No";
            int mobi;
            cin>>mobi;
            switch(mobi){
                case 1: cout <<mobiuzEnglish(true);break;
                case 2: cout <<"--------We are glad of your visit!---------";break;

            }
        }if((str[0]=='8' && str[1]=='8') || (str[0]=='9' && str[1]=='9')){
            cout <<"Your number belongs to UZMOBILE.\n";
            cout <<"Do you want to use UZMOBILE services?...\n1.Yes\n2.No";
            int uz;
            cin>>uz;
            switch(uz){
                case 1: cout <<uzmobileEnglish(true);break;
                case 2: cout <<"--------We are glad of your visit!---------";break;

            }
        }

    }else{
        cout <<"--------NUMBER NOT AVAILABLE--------";
    }

}



//uzbekcha
string uzmobileUzbek(bool){
    cout <<"1.Tariflar haqida\n";
    cout <<"2.USSD kodlar\n";
    cout <<"3.Internet paketlar\n";
    int tanlov;
    cin >>tanlov;
    switch(tanlov){
    case 1:
        cout<<"1.Milliy 10\n2.Milliy 15\n3.Milliy 40\n4.Milliy 50\n5.Milliy 70\n";break;
    case 2:
        cout<<"*100#-Boshqarish\n*105#-Tarif bo'yicha  qoldiq\n*107#-Hisobni tekshirish\n*150#-Qarz olish xizmati";break;
    case 3:
        cout<<"1.1GB-9000so'm\n2.1,5GB-14000so'm\n3.5GB-25000so'm\n4.12GB-50000so'm";break;
    }

}


string mobiuzUzbek(bool){
    cout <<"1.Tariflar haqida\n";
    cout <<"2.USSD kodlar\n";
    cout <<"3.Internet paketlar\n";
    int tanlov;
    cin >>tanlov;
    switch(tanlov){
    case 1:
        cout<<"1.Omad plus\n2.Mobi 16\n3.Gap yo'q mini\n4.Mobi 20\n5.Gap yo'q optima\n";break;
    case 2:
        cout<<"*100#-Balansni tekshirish\n*102#-Trafik qoldig'i\n*104#-Sms qoldig'i\n*150#-Mening raqamim";break;
    case 3:
        cout<<"1.300MB-8000so'm\n2.500MB-9000so'm\n3.1GB-11000so'm\n4.10GB-50000so'm";break;
    }

}

string funcUzbek(int number){
    string str=to_string(number);
    int xona=str.length();
    if(xona==9){
        if((str[0]=='8' && str[1]=='8') || (str[0]=='9' && str[1]=='7')){
            cout <<"Sizning raqamingiz MOBIUZ kompaniyasiga tegishli\n";
            cout <<"MOBIUZ xizmatlaridan foydalanishni xohlaysizmi...\n1.Ha\n2.yo'q\n";
            int mobi;
            cin>>mobi;
            switch(mobi){
                case 1: cout <<mobiuzUzbek(true);break;
                case 2: cout <<"--------Tashrifingizdan xursandmiz!---------";break;

            }
        }if((str[0]=='8' && str[1]=='8') || (str[0]=='9' && str[1]=='9')){
            cout <<"Sizning raqamingiz UZMOBILE kompaniyasiga tegishli\n";
            cout <<"UZMOBILE xizmatlaridan foydalanishni xohlaysizmi...\n1.Ha\n2.yo'q";
            int uz;
            cin>>uz;
            switch(uz){
                case 1: cout <<uzmobileUzbek(true);break;
                case 2: cout <<"--------Tashrifingizdan xursandmiz!---------";break;

            }
        }

    }else{
        cout <<"--------MAVJUD BO'LMAGAN RAQAM--------";
    }

}


int main(){
    int number;
    int til;
    while(true){
    cout <<"---------TELEFON KOMPANIYASI-----------\nQaysi tilni tanlaysiz.\n1.O'zbek\n2.English\n";
    cout <<"Tanlang: ";cin >>til;
    switch(til){
        case 1: while(true){
                cout <<"Telefon raqamni kiriting(+998971234567): +998";
                cin >>number;
                cout <<funcUzbek(number);
        case 2: while(true){
                cout <<"Enter a phone number(+998971234567): +998";
                cin >>number;
                cout <<funcEnglish(number);
        }

    }
    }

    }


}
