#include <iostream>
#include <vector>
using namespace std;
	
int main() {
	int n,v,count=0;
	cin >> n;
	
	vector<int> arr(n);


	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> v;

	for (int i = 0; i < n; i++) {
		if (v == arr[i])
			count+=1;
	}

	cout << count;
	return 0;
}