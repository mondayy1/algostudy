#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	string input;
	map<char, int> count;
	char checker;

	cin >> input;
	for (int i = 0; i < input.size(); i++) {
		count[toupper(input[i])] = 0;
	}
	count['?'] = 0;
	for (int i = 0; i < input.size(); i++) {
		count[toupper(input[i])]++;
		if (i == 0) checker = toupper(input[i]);
		else {
			if (count[checker] < count[toupper(input[i])]) checker = toupper(input[i]);
			else if (checker != toupper(input[i]) && count[checker] == count[toupper(input[i])]) {
				checker = '?';
				count['?'] = count[toupper(input[i])];
			}
		}
	}
	cout << checker;

	return 0;
}