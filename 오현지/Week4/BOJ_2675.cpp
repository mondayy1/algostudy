#include <iostream>
#include <string>
using namespace std;
int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int R;
		string S, P;
		cin >> R >> S;
		for (int j = 0; j < S.length(); j++) {
			for (int i = 0; i < R; i++) {
				cout << S[j];
			}

		}
		cout << '\n';
	}
	return 0;

}