#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    string newText = "Asadbek", text = "";

    int len = newText.length();
    for (int i = 0; i < len; i++) {
        int how = rand() % 3;
        switch(how) {
            case 0: {
                int raqam1 = rand() % 9;
                char sign1 = (raqam1 + 48);
//                text += sign1;
                newText[i] = sign1;
            }
            case 1: {
                int raqam2 = rand() % 26;
                char sign2 = (raqam2 + 65);
//                text += sign2;
                newText[i] = sign2;
            }
            case 2: {
                int raqam3 = rand() % 26;
                char sign3 = (raqam3 + 97);
//                text += sign3;
                newText[i] = sign3;
            }
        }
    }
    cout << newText << endl;
    return 0;
}
