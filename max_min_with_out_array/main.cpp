#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "How many numbers are you going to enter: ";
    cin >> n;
    int maxi = n, mini = n, num = n;
    for (int i=0; i < num; i++) {
        cout << i+1 << "-sonni kiriting: "; cin >> n;
        if (n > maxi) { maxi = n; }
        if (n < mini) { mini = n; }
    }
    cout << "Maximum is " << maxi << endl;
    cout << "Minium is " << mini << endl;
    return 0;
}
