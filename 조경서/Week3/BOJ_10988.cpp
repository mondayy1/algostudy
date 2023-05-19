#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main() {

	string str;
	int count;
	cin >> str;
	int n = str.size();

	for (int i = 0; i < n / 2; i++) {
		if (str[i] == str[n-1 - i]) {
			count = 1;
		}
		else {
			count = 0;
			break;
		}
	}
	cout << count;
	return 0;
}