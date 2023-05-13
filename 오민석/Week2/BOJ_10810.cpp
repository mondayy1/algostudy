#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;

    int i, j, k;
    vector<int> ballInBucket(n);
    for (int play = 0; play < m; play++) {
        cin >> i >> j >> k;
        for (int balls = i - 1; balls < j; balls++) {
            ballInBucket[balls] = k;
        }
    }
    for (int i = 0; i < n; i++) cout << ballInBucket[i] << " ";
    return 0;
}