#include <iostream>
using namespace std;
int main() {
	int H, M;
	cin >> H >> M;
	if (M >= 45) cout << H << ' ' << M - 45;
	else {
		H--;
		if (H == -1) H = 23;
		cout << H << ' ' << 60 + M - 45;
	}

	return 0;
}