#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num, input, min, max;

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> input;
		if (i == 0) {
			min = input;
			max = input;
		}

		if (min > input) min = input;
		if (max < input) max = input;
	}
	cout << min << ' ' << max;

	return 0;
}