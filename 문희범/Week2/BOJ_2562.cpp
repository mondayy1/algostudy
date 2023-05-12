#include <iostream>
#include <vector>
using namespace std;

int main() {
	int input, index, max;
	vector<int> nums;

	for (int i = 1; i <= 9; i++) {
		cin >> input;
		nums.push_back(input);
	}
	for (int i = 0; i < 9; i++) {
		if (i == 0) {
			max = nums[0];
			index = i;
		}
		if (max < nums[i]) {
			max = nums[i];
			index = i;
		}
	}
	cout << max << '\n' << index+1;

	return 0;
}