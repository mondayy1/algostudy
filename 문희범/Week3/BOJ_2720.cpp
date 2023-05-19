#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> cent = { 0, 0, 0, 0 };
	int num, input = 0;

	cin >> num;
	for (int i = 0; i < num; i++) {
		cent = { 0, 0, 0, 0 };
		cin >> input;
		while (input != 0) {
			if (input >= 25) {
				cent[0] = int(input / 25);
				input %= 25;
			}
			else if (input >= 10) {
				cent[1] = int(input / 10);
				input %= 10;
			}
			else if (input >= 5) {
				cent[2] = int(input / 5);
				input %= 5;
			}
			else {
				cent[3] = input;
				input = 0;
			}
		}
		cout << cent[0] << ' ' << cent[1] << ' ' << cent[2] << ' ' << cent[3] << '\n';
	}
}