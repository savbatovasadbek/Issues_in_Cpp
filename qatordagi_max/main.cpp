#include <iostream>

using namespace std;

int main()
{
    int n, a[n];
    cout << "Nechta son kiritasiz: "; cin >> n;
    for (int i=0; i < n; i++ ) {
        cout << i+1 << "-sonni kiriting:";
        cin >> a[i];
    }

    cout << "Hello world!" << endl;
    return 0;
}
