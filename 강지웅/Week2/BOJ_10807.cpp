#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, n, v;
	int cnt = 0;
	vector<int> numbers;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> n;
		numbers.push_back(n);
	}

	cin >> v;

	for (int i = 0; i < N; i++) {
		if (numbers[i] == v) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}