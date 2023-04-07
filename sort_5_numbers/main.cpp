
#include<iostream>

using namespace std;

int main() {

    int a[4];
    for (int i=0; i < 5; i++) {
        cout << i+1 <<"-sonni kiriting: ";
        cin >> a[i];
    }

    // swap - - > swaps the value of two variables.

    if(a[1] < a[0])
        swap(a[1],a[0]);
    if(a[2] < a[1]){
        swap(a[2],a[1]);
        if(a[1] < a[0])
            swap(a[1],a[0]);
    }

    if(a[3] < a[2]){
        swap(a[3], a[2]);
        if(a[1] < a[0])
            swap(a[1],a[0]);
        if(a[2] < a[1]){
            swap(a[2],a[1]);
            if(a[1] < a[0])
                swap(a[1],a[0]);
        }
    }

    if(a[4] < a[3]){
        swap(a[4],a[3]);
            if(a[3] < a[2]){
                swap(a[3], a[2]);
                if(a[1] < a[0])
                    swap(a[1],a[0]);
                if(a[2] < a[1]){
                    swap(a[2],a[1]);
                    if(a[1] < a[0])
                        swap(a[1],a[0]);
            }
        }

    }

    cout << "Natija: \n";

    for (int i=0; i < 5; i++) {
        cout << a[i] << "\t";
    }

    return 0;
}
