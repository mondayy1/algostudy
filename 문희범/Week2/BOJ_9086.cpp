#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	string input;

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> input;
		cout << input[0] << input[input.size()-1] << endl;;
	}

	return 0;
}