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
		money /= 100;
		q = money / 0.25;
		money = money - q * 0.25;
		d = money / 0.1;
		money = money - d * 0.1;
		n = money / 0.05;
		money = money - n * 0.05;
		p = money / 0.01;

		cout << q << ' ' << d << ' ' << n << ' ' << p << '\n';
	}
}
