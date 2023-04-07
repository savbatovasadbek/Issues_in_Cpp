#include <iostream>

using namespace std;

// We have two monkeys, a and b, and the parameters aSmile and bSmile indicate if each is smiling.
//     We are in trouble if they are both smiling or if neither of them is smiling.
//          Return true if we are in trouble.

//void monkeyTrouble (bool aSmile, bool bSmile)
//{
//    cout << ((aSmile == bSmile) ? "True" : "False");
//}
//
//int main()
//{
//    bool aSmile, bSmile;
//    cout << "1-maykun kulayaptimi: "; cin >> aSmile;
//    cout << "2-maykun kulayaptimi: "; cin >> bSmile;
//
//    monkeyTrouble (aSmile, bSmile);
//
//    return 0;
//}



// Given an int n, return the absolute difference between n and 21, except return double the
//   absolute difference if n is over 21.

//int diff21 (int n)
//{
//    return ((n <= 21) ? (21-n) : 2*(n-21));
//}
//
//int main ()
//{
//    int n;
//    cin >> n;
//    cout << diff21(n);
//    return 0;
//}




// Given a string, return a new string where "not " has been added to the front.
// However, if the string already begins with "not", return the string unchanged.

//function notString(str){
//  if (str[0]=='n' && str[1]=='o' && str[2]=='t') {
//    return str;
//  }
//  else {
//    return ("not " + str);
//  }
//
//}




/* Given a string, return a new string where the first and last chars have been exchanged.

Examples

frontBack('code') → eodc
frontBack('a') → a
frontBack('ab') → ba */


string frontBack (string str) {
    char a, b;
    int l = str.length();
    a = str[0];
    b = str[l-1];
    str[l-1] = a;
    str[0] = b;
    return str;
}

int main () {

    string str;
    cin >> str;

    cout << frontBack(str);

    return 0;
}















