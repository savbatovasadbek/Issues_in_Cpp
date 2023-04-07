#include <iostream>
#include <string.h>

using namespace std;

string dateNum (string date) {
    string day = "", month = "", year = "";

    if (isdigit(date[0])) {
        day += date[0];

        if (isdigit(date[1])) {
            day += date[1];
        }
    }

    month += date[date.find(" ")+1];
    month += date[date.find(" ")+2];
    month += date[date.find(" ")+3];

    if (month == "Jan") { month = "01"; }
    if (month == "Feb") { month = "02"; }
    if (month == "Mar") { month = "03"; }
    if (month == "Apr") { month = "04"; }
    if (month == "May") { month = "05"; }
    if (month == "Jun") { month = "06"; }
    if (month == "Jul") { month = "07"; }
    if (month == "Aug") { month = "08"; }
    if (month == "Sep") { month = "09"; }
    if (month == "Oct") { month = "10"; }
    if (month == "Nov") { month = "11"; }
    if (month == "Dec") { month = "12"; }

    date.replace(date.find(" "), 1, "");

    if (isdigit(date[date.find(" ")+1])) { year += date[date.find(" ")+1]; }
    if (isdigit(date[date.find(" ")+2])) { year += date[date.find(" ")+2]; }
    if (isdigit(date[date.find(" ")+3])) { year += date[date.find(" ")+3]; }
    if (isdigit(date[date.find(" ")+4])) { year += date[date.find(" ")+4]; }

    return year + "-" + month + "-" + day;
}

int main()
{

    string date;

    cout << "Enter date: ";  getline(cin, date);

    cout << "Result date: " << dateNum(date) << endl;

    return 0;
}
