#include <iostream>
using namespace std;

int Quadrant_n(int x, int y) {
	if (x > 0 && y > 0) return 1;
	else if (x < 0 && y > 0) return 2;
	else if (x < 0 && y < 0) return 3;
	else return 4;
}

int main(void) {
	int x = 0;
	int y = 0;
	cin >> x >> y;
	cout << Quadrant_n(x, y);
	return 0;
}