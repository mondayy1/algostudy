#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

int main(void) {
	int N, min;
	N = min = 0;
	cin >> N >> min;
	vector<int> arr(N);


	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	bool first_check = true;

	for (int j = 0; j < N; j++) {
		if (min > arr[j]) {
			if (first_check == false) cout << " ";
			else first_check = false;
			cout << arr[j];
		}
	}

	return 0;
}

//https://www.acmicpc.net/problem/10871