#include <iostream>

using namespace std;

int main()
{
    int timeHour1, timeMinut1, timeSecund1, timeHour2, timeMinut2, timeSecund2;
    cout << "Boshlang'ich vaqtni kiriting: ";
    cin >> timeHour1 >> timeMinut1 >> timeSecund1;

    if (timeHour1>0 && timeMinut1>0 && timeSecund1>0 && timeHour1<24 && timeMinut1<60 && timeSecund1<60){

        cout << "Keyingi vaqtni kiriting: ";
        cin >> timeHour2 >> timeMinut2 >> timeSecund2;

        if (timeHour2>0 && timeMinut2>0 && timeSecund2>0 && timeHour1<timeHour2 && timeHour2<24 && timeMinut2<60 && timeSecund2<60){

            int res = (timeHour2*3600 + timeMinut2*60 + timeSecund2) - (timeHour1*3600 + timeMinut1*60 + timeSecund1);
            cout << "Natija: " << res;
        } else {
            cout << "Keyingi vaqt noto'g'ri kiritildi!";
        }

    } else {
        cout << "Boshlang'ich vaqt noto'g'ri kiritildi!";
    }
    return 0;
}
