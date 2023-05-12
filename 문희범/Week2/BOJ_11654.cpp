#include <iostream>
#include <string>
using namespace std;

int main() {
	char input;

	cin >> input;
	if (input <= 9 && input >= 0) {
		cout << input + 48;
	}
	else {
		cout << int(input);
	}

	return 0;
}