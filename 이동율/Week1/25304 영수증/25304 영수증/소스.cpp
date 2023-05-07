#include <iostream>

using namespace std;

int main() {
	int res,n;
	cin >> res >> n;
	for (int i = 0; i < n; i++) {
		int price, cnt;
		cin >> price >> cnt;
		res -= price * cnt;
	}
	if (res == 0) cout << "Yes";
	else cout << "No";
}