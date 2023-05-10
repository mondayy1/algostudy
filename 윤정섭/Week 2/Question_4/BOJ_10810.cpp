#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

int main(void) {

    int N, M;
    N = M = 0;

    cin >> N >> M;

    vector<int> arr(N);

    int A, B, C;
    A = B = C = 0;

    for (int i = 0; i < M; i++) {
        cin >> A >> B >> C;
        for (int j = A - 1; j < B; j++) {
            arr[j] = C;
        }
    }

    for (int i = 0; i < N - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << arr[N-1];

    return 0;
}

//https://www.acmicpc.net/problem/10810