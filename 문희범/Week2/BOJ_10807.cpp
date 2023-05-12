#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num, input, search;
	int counter = 0;
	vector<int> nums;

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> input;
		nums.push_back(input);
	}
	cin >> search;
	for (int i = 0; i < num; i++) {
		if (search == nums[i]) counter++;
	}
	cout << counter;

	return 0;
}