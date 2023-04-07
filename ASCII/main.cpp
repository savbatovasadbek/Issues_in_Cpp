#include <iostream>

using namespace std;

int main()
{
    char name1=65; // 0110 0101
    char name2=83; // 1000 0011
    char name3=65; // 0110 0101
    char name4=68; // 0110 1000
    char name5=66; // 0110 0110
    char name6=69; // 0110 1001
    char name7=75; // 0111 0101
    cout << name1 << " ~ [65] ~ 0110 0101" << endl;
    cout << name2 << " ~ [83] ~ 1000 0011" << endl;
    cout << name3 <<  " ~ [65] ~ 0110 0101" << endl;
    cout << name4 <<  " ~ [68] ~ 0110 1000" << endl;
    cout << name5 <<  " ~ [66] ~ 0110 0110" << endl;
    cout << name6 <<  " ~ [69] ~ 0110 1001" << endl;
    cout << name7 <<  " ~ [75] ~ 0111 0101" << endl;

    string name="ASADBEK";
    for (int k=0; k<=6; k++) {cout << int(name[k]) << "\t"; }
    return 0;
}
