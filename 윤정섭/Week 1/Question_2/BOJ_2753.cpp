#include <iostream>
using namespace std;

int leap_year(int year) {
 
    if ((year % 4) != 0) return 0;
    else {
        if ((year % 400) == 0) return 1;
        else if ((year % 100) == 0) return 0;
        else return 1;
    }
}


int main(void) {
    int year = 0;
    cin >> year;
    cout << leap_year(year);

    return 0;
}