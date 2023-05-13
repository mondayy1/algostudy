#include <iostream>

using namespace std;

int main() {
    int i;
    cin >> i;

    int sum = 0;
    char c;
    for (int j = 0; j < i; j++) {
        cin >> c;
        sum += (int)(c - '0'); 
    }

    cout << sum << endl;

}
