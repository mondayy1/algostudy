#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T, n;
	const int Q = 25;
	const int D = 10;
	const int N = 5;
	const int P = 1;
	vector<int> c;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n;
		c.push_back(n);
	}
	
	for (int i = 0; i < T; i++) {
		cout << c[i] / Q << " ";
		cout << (c[i] % Q) / D << " ";
		cout << ((c[i] % Q) % D) / N << " ";
		cout << (((c[i] % Q) % D) % N) / P << "\n";
	}
	return 0;
}