#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a,b;
    cout << "The first leg of a triangle: "; cin >> a;
    cout << "The second leg of a triangle: "; cin >> b;
    float c=sqrt(pow(a,2)+pow(b,2));
    float p=a+b+c;
    cout << "The hypotenuse of the triangle is " << c << endl;
    cout << "The perimeter of the triangle is " << p;
    return 0;
}
