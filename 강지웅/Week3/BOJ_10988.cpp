#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	string s;
	cin >> s;

	for (int i = 0; i < s.length() / 2; i++) {
		if (s[i] != s[s.length() - i - 1]) {
			cout << "0" << "\n";
			return 0;
		}
	}
	cout << "1" << "\n";
	return 0;
}