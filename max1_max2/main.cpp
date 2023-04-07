#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Massivda nechta element bo'sin: "; cin >> n;
    int a[n];
    for (int i=0; i<n; i++) { cin >> a[i]; }
    cout << "--------------------------------------------------" << endl;
    cout << "Massiv elementlari: " << endl;
    for (int i=0; i<n; i++)
    {
        for (int j=i; j<n; j++)
        {
            if (a[i]>a[j])
            {
                int h=a[i];
                a[i]=a[j];
                a[j]=h;
            }
        }
    }
    int maxi = a[n-1];
    int maxi2 = a[n-2];
    cout << "Max = " << maxi << endl;
    cout << "Max2 = " << maxi2;
    return 0;
}
