#include <iostream>
#include <time.h>

using namespace std;

//void func (int a, int b = 2) {
//    if (b >= 100)
//        return;
//    cout << b << "\t";
//    func(a, b+2);
//}
//
//int main()
//{
//    func(100);
//    return 0;
//}

/*
void foo (int num) {
    int answer;
    do {
        cout << "Enter answer: "; cin >> answer;
    } while (num != answer);
}

int main ()
{
    srand(time(NULL));

    int num = rand() % 100;

    cout << "Answer: " << num << endl;

    foo(num);

    return 0;
}

*/

/*
int foo (int num) {
    int answer;
    cout << "Enter answer: "; cin >> answer;
    if (num == answer)
        return 0;
    return foo(num);
}


int main ()
{
    srand(time(NULL));
    int num = rand() % 100;
    cout << "Answer: " << num << endl;

    foo(num);
    return 0;
}
*/

int foo (int num) {
    int newNum;
    string answer;
    cout << "Enter answer: "; cin >> answer;
    for (int i=0; i < answer.length(); i++) {
        if (!(isdigit(answer[i]))) {
            cout << "-------------------\n";
            cout << "Son kiriting!!!\n";
            cout << "-------------------\n";
            break;
        }
        else {
           newNum = stoi(answer);
        }
    }

    if (num == newNum) {
        cout << "-------------------\n";
        cout << "Topdingiz tabriklaymiz!\n";
        cout << "-------------------\n";
        return 0;
    }

    return foo(num);
}

int main () {

    srand(time(NULL));
    int num = rand() % 100;
    cout << "Answer: " << num << endl;

    foo(num);
}

