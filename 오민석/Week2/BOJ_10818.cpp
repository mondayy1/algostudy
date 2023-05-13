#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    int here, minValue, maxValue;
    cin >> here;

    minValue = maxValue = here;
    for (int i = 1; i < n; i++) {
        cin >> here;
        if (here < minValue) minValue = here;
        if (here > maxValue) maxValue = here;
    }
    cout << minValue << " " << maxValue << "\n";
    return 0;
}