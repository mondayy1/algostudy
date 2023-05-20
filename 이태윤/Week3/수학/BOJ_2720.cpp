#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int C, quarters, dimes, nickels, pennies;
        cin >> C;
        quarters = C / 25;
        C %= 25;
        dimes = C / 10;
        C %= 10;
        nickels = C / 5;
        C %= 5;
        pennies = C;

        cout << quarters << " " << dimes << " " << nickels << " " << pennies << endl;
    }
    return 0;
}
