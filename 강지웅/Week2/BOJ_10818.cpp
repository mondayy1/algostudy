#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, n;
	vector<int> numbers;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> n;
		numbers.push_back(n);
	}

	int min = *min_element(numbers.begin(), numbers.end());
	cout << min;
	int max = *max_element(numbers.begin(), numbers.end());
	cout << " " << max;

}