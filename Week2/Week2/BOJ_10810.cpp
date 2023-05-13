#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int n, m,i,j,k;

	cin >> n >> m;

	vector<int> a(n);

	for (int l = 0; l < m; l++) {
		cin >> i >> j >> k;

		for (int h = i-1; h < j; h++) {
			a[h] = k;
		}
	}

	for (int l = 0; l < n; l++) {
		cout << a[l]<<" ";
	}

	return 0;
}