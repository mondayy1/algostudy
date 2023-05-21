#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int count[26] = { 0 };
	string S;
	cin >> S;
	int length = S.length();
	for (int i = 0; i < length; i++) {
		S[i] = toupper(S[i]);
	}
	for (int i = 0; i < length; i++) {
		count[S[i] - 'A']++;
	}
	int max = 0;
	int max_index = 0;
	for (int i = 0; i < 26; i++) {
		if (max < count[i]) {
			max = count[i];
			max_index = i;
			continue;
		}
		if (max == count[i]) {
			max_index = -1;
		}
	}
	if (max_index == -1) cout << '?';
	else cout << (char)(max_index + 'A');
}