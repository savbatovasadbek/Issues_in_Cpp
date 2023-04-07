#include <iostream>

using namespace std;

int main()
{
    int s=0;
    for (int k=1; k<=10000; k++)
    {
        for (int i=1; i<k; i++)
        {
            if (k%i==0) {s+=i;}
        }
        if (s==k) { cout << k << endl; }
        s=0;
    }
    return 0;
}
