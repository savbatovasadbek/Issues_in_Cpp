#include <iostream>

using namespace std;

int main()
{
    int corrency, allCorrency;

    cout << "Pulni kiriting: "; cin >> corrency;

    if (corrency < 300 && corrency > 0) {
        allCorrency = corrency + corrency * 0.12;
        cout << "Sizdan " << allCorrency << " so'm.";
    }

    else if (corrency >= 300 && 500 > corrency) {
        allCorrency = corrency + corrency * 0.15;
        cout << "Sizdan " << allCorrency << " so'm.";
    }

    else if (corrency >= 500) {
        allCorrency = corrency + corrency * 0.2;
        cout << "Sizdan " << allCorrency << " so'm.";
    }

    else {
        cout << "Siz hisobni noto'g'ri kiritdingiz!";
    }

    return 0;
}
