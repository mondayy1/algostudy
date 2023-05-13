//숫자를 입력받아 별 찍기 3
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = n; j >i; j--) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}