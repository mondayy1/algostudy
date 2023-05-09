#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M, i, j, k;
	cin >> N >> M;
	vector<int> numbers;
	vector<int> basket(N + 1);

	for (int a = 0; a < M; a++) {
		cin >> i >> j >> k;
		numbers.push_back(M);
		for (int b = i; b <= j; b++) {
			basket[b] = k;
		}
	}

	for (int a = 1; a <= N; a++) {
		cout << basket[a] << " ";
	}

}