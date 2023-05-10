#include <iostream>
using namespace std;
#define endl '\n'
#define MIN_SIZE -2147483648
#define MAX_SIZE 2147483647

int main(void) {
    int N = 0;
    cin >> N;

    int input_data = 0;
    int min_data = MAX_SIZE;
    int max_data = MIN_SIZE;

    for (int i = 0; i < N; i++) {
        cin >> input_data;
        if (min_data > input_data) min_data = input_data;
        if (max_data < input_data) max_data = input_data;
    }
    cout << min_data << " " << max_data;

    return 0;
}

//https://www.acmicpc.net/problem/10818