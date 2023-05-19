#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string input, compare;

	cin >> input;
	compare = input;
	reverse(input.begin(), input.end());
	if (input == compare) cout << 1;
	else cout << 0;

	return 0;
}