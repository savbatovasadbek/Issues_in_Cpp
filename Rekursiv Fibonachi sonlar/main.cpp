#include <iostream>

using namespace std;

int foo(int num) {
    if (num <= 1) {
        return num;
    } else {
        return (foo(num - 1) + foo (num - 2));
    }
}

int main() {

    for(int i = 0; i < 10; i++) {
        cout << foo(i) << "\t";
    }

    return 0;
}
