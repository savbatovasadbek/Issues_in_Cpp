#include <iostream>
#include <math.h>

using namespace std;

int triangular (int x1, int y1, int x2, int y2) {
    int side = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return side;
}

int face (int a, int b, int c) {
    int p = (a+b+c)/2;
    int s = sqrt(p*(p-a)*(p-c)*(p-c));
    return s;
}

int main()
{
    int x1, y1, x2, y2, x3, y3;
    cout << "Birinchi nuqtaning koordinatalarini kriting: ";
    cin >> x1 >> y1;

    cout << "Ikkinchi nuqtaning koordinatalarini kriting: ";
    cin >> x2 >> y2;

    cout << "Uchinchi nuqtaning koordinatalarini kriting: ";
    cin >> x3 >> y3;

    cout << "S=" << face (triangular(x1, y1, x2, y2), triangular(x1, y1, x3, y3), triangular(x3, y3, x2, y2));

    return 0;
}
