#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	string S;
	vector <int>countS;
	cin >> S;
	int length = S.length();
	for (int i = 0; i < length; i++) {
		S[i] = toupper(S[i]);
	}
	countS.resize(length);
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (S[i] == S[j]) {
				countS[i]++;
			}
		}
	}
	int max_index = countS[0];
	for (int i = 0; i < length; i++) {
		if (length == 1) {
			max_index = 0;
			break;
		}
		else if (max_index < countS[i]) {
			max_index = i;
		}
	}
	for (int i = 0; i < length; i++) {
		if (countS[max_index] == countS[i]) {
			S[max_index] = '?';
		}
	}
	cout << S[max_index];
}