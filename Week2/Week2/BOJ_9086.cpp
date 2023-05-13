#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;

	string str;

	for (int i = 0; i < n; i++) {
		cin >> str;

		if (str.length() == 1) {
			cout << str << str<<"\n";
		}
		else {
			cout << str.at(0) << str.at(str.length() - 1)<<"\n";
		}
	}

	return 0;
}