#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'


int main(void) {
    int N = 9;
    int max_num = 0;

    vector<int> arr(N);

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int j = 0; j < N; j++) {
        if (arr[max_num] < arr[j]) {
            max_num = j;
        }
    }

    cout << arr[max_num] << endl << max_num + 1;

    return 0;
}

//https://www.acmicpc.net/problem/2562