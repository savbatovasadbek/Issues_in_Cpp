#include <iostream>

using namespace std;

int main()
{
    int a, b, maxi, mini;
    cin >> a >> b;
    maxi = (a>b) ? a:b;
    mini = (a<b) ? a:b;
    cout << "max=" << maxi << endl;
    cout << "min=" << mini;
    return 0;
}
