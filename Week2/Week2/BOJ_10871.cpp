#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n, x,count=0;

	cin >> n >> x;
	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];

		if (a[i] < x)
			cout << a[i]<<" ";
	}

}