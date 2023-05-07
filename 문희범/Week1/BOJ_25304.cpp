#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	int e = 0;
	cin >> a >> b;

	for (int i = 1; i <= b; i++) {
		cin >> c >> d;
		e += c * d;
	}
	if (a == e) cout << "Yes";
	else cout << "No";

	return 0;
}