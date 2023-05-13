//숫자를 입력받아 별 찍기 2
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n - 1; j++) {
			cout << " ";
		}

		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}