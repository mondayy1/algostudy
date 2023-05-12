#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num, count, begin, end, input;
	vector<int> basket;

	cin >> num >> count;
	basket.assign(num, 0);
	for (int i = 0; i < count; i++) {
		cin >> begin >> end >> input;
		for (int j = begin - 1; j < end; j++) {
			basket[j] = input;
		}
	}
	for (int i = 0; i < num; i++) {
		cout << basket[i] << ' ';
	}

	return 0;
}