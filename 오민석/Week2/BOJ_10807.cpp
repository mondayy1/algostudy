#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    int v;
    cin >> v;

    int res = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == v) res++;
    }
    cout << res << "\n";
    return 0;
}