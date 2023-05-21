#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	double money;
	int q = 0;
	int d = 0;
	int n = 0;
	int p = 0;
	for (int i = 0; i < T; i++) {
		cin >> money;
		q = money / 25;
		money = money - q * 25;
		d = money / 10;
		money = money - d * 10;
		n = money / 5;
		money = money - n * 5;
		p = money / 1;

		cout << q << ' ' << d << ' ' << n << ' ' << p << '\n';
	}
}
