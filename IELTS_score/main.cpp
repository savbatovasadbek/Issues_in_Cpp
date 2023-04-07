#include <iostream>
#include <cmath>

using namespace std;

float IELTS (float allScore)
{
    float x = allScore;
    float intPart, fractPart;

    fractPart = modf(x, &intPart);

    if (fractPart >= 0.250 && fractPart <= 0.625) {
        intPart += 0.5;
    }
    else if (fractPart >= 0.626 && fractPart <= 0.999) {
        intPart++;
    }

    return intPart;

}

//void check (string chart, float score) {
//    bool res = true;
//    do {
//        cout << chart << " balingizni kiriting: ";
//        cin >> score;
//        if (score >=0 && score <=9) {
//            res = false;
//        } else {
//            cout << chart << " balingiz noto'g'ri kiritildi!\n";
//            cout << "Qaytadan kiriting: \n";
//        }
//    }
//    while (res);
//}

int main()
{
    float speaking, listening, writing, reading, res;

    cout << "Enter your speaking score: "; cin >> speaking;
    cout << "Enter your listening score: "; cin >> listening;
    cout << "Enter your reading score: "; cin >> reading;
    cout << "Enter your writing score: "; cin >> writing;

    res = (speaking + listening + writing + reading) /4;

    float ielts_score = IELTS(res);

    cout << "Congratulations!. You got " << ielts_score << " in IELTS!" << endl;

    return 0;
}
