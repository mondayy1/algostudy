#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> origin = { 1, 1, 2, 2, 2, 8 };
	vector<int> input = { 0, 0, 0, 0, 0, 0 };
	int in;

	for (int i = 0; i < 6; i++) {
		cin >> in;
		input[i] = in;
	}
	for (int i = 0; i < 6; i++) {
		origin[i] -= input[i];
		cout << origin[i] << ' ';
	}

	return 0;
}