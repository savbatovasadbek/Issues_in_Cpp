#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Kun boshidan beri nechi sekund o'tdi: "; cin >> n;
    int hour = n/3600;
    int minut = (n-hour*3600)/60;
    n = n-(hour*3600+minut*60);
    cout << "Kunboshidan beri " << hour << " soat, " << minut << " minut va " << n << " secund o'tdi!";
    return 0;
}
