#include <iostream>
#define DIVIDE(x, y) x % y
using namespace std;

int main() {
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n, m;

	while (1) {
		cin >> n >> m;
		if (n == 0 && m == 0) {
			break;
		}
		if (DIVIDE(m, n) == 0) {
			cout << "factor" << "\n";
		}
		else if (DIVIDE(n, m) == 0) {
			cout << "multiple" << "\n";
		}
		else {
			cout << "neither" << "\n";
		}
	}
	return 0;
}