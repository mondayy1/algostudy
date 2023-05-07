#include <iostream>

using namespace std;

int main() {
	int h, m;
	cin >> h >> m;
	if (m < 45) {
		h--;
		m -= 45;
		m += 60;
	}
	else m -= 45;
	if (h < 0) h += 24;
	cout << h << " " << m;
	return 0;
}