#include <iostream>
#include <math.h>

using namespace std;
int func(int n, int sum = 0)
{
    int len = log10(n) + 1;

    int temp = n;

    while (n)
    {
       sum = sum +  pow(n % 10,len);
       n = n / 10;
    }
    if(temp == sum){
        return sum ;
    }
    else{
        return 0;
    }
}

int main()
{
    int n ;
    cout<< " Sonni kiriting: "; cin>> n;
    cout<< func(n);
    for(int i = 1; i < n; i++)
        {
            if( func(i))
            cout<< func(i) << "  ";
        }

// ASADBEK'S  SOLUTION
//    int n;
//    cout << "Enter number: "; cin >> n;
//    for (int i = 1; i <= n; i++) {
////        cout << i << "\t"; // steb 1
//        int newNum = i;
//        int xona = log10(newNum) + 1;
////        cout << xona << "\t"; // step 2
//
//        newNum = i;
//        int sum = 0;
//        while (newNum) {
//            sum += pow(newNum % 10, xona);
//            newNum /= 10;
//        }
//
//        if (sum == i) {
//            cout << i << "\t";
//        }
//    }
    
    return 0;
}
