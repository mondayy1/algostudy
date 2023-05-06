#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a;

	for (int i = 1; i <= a; i++) {
		cin >> b >> c;
		cout << (b+c) << endl;
	}

	return 0;
}