#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num, input, search;

	cin >> num;
	cin >> search;
	for (int i = 0; i < num; i++) {
		cin >> input;
		if (input < search) cout << input << ' ';
	}

	return 0;
}