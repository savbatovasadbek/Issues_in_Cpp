#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c=0;
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    for (int k=a; k<=b; k+=1)
    {
        c+=k;
    }
    cout << "Natija:" << c;
    cout << endl;
    cout << "Ildizi:" << pow(b,1./a);
    return 0;
}
