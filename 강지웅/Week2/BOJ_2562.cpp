#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	vector<int> numbers;

	for (int i = 0; i < 9; i++) {
		cin >> n;
		numbers.push_back(n);
	}
	
	int max = *max_element(numbers.begin(), numbers.end());
	cout << max << "\n";
	int max_index = max_element(numbers.begin(), numbers.end()) - numbers.begin();
	cout << max_index + 1;
	
	return 0;
}