#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
	string s;
	cin >> s;

	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	vector<int> v(26, 0);

	for (int i = 0; i < s.length(); i++) {
		int idx = 0;
		if (s[i] >= 'A' && s[i] <= 'Z') {
			idx = s[i] - 'A';
		}
		else {
			idx = s[i] - 'a';
		}
		v[idx]++;
	}
	int max = 0; int max_idx = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] > max) {
			max = v[i];
			max_idx = i;
		}
	}

	sort(v.begin(), v.end());
	if (v[24] == v[25]) {
		cout << '?';
	}
	else {
		cout << alphabet[max_idx];
	}

	return 0;
}