#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, x;
    cin >> n >> x;

    int here;
    for (int i = 0; i < n; i++) {
        cin >> here;
        if (here < x) cout << here << " ";
    }
    return 0;
}