// 1차 시도 실패(15분)
// 2차 시도
#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	int C = 0;
	int D = 0;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> C;
		D = C / 100;
		D += D % C / 100;
		if (D >= 0.25 && D / 0.25 > 0) {
			cout << D / 0.25;
			D += D % 0.25;
		}
	}
}
