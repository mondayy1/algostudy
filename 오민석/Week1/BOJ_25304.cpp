#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int x, n, a, b;
    cin >> x >> n;

    while (n--) {
        cin >> a >> b;
        x -= (a * b);
    }

    if (x == 0) cout << "Yes";
    else cout << "No";
    return 0;
}