#include <iostream>
#include <vector>
#define MINUS(x, y) x-y
using namespace std;

int main() {
	vector<int> v{ 1, 1, 2, 2, 2, 8 };
	vector<int> p;
	int n;

	for (int i = 0; i < 6; i++) {
		cin >> n;
		p.push_back(n);
	}
	for (int i = 0; i < 6; i++) {
		cout << MINUS(v[i], p[i]) << " ";
	}
	return 0;
}