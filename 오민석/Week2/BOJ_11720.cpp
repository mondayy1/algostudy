#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int res = 0;
    for (int i = 0; i < n; i++) {
        res += (s[i] - '0');
    }
    cout << res << "\n";
    return 0;
}