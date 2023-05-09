#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	string str;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> str;
		int size = str.length();
		cout << str[0] << str[size - 1] << "\n";
	}

	return 0;
}