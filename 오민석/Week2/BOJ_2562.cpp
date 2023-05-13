#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int here, maxValue, maxIdx;

    cin >> here;
    maxValue = here, maxIdx = 1;
    for (int i = 2; i <= 9; i++) {
        cin >> here;
        if (maxValue < here) {
            maxValue = here;
            maxIdx = i;
        }
    }
    cout << maxValue << "\n";
    cout << maxIdx << "\n";
    return 0;
}