/* 최댓값 (4-4단계)
소요시간 : 9분 28초
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> arr;
	arr.resize(9);
	int max = 0;
	int index = 0;
	for (int i = 1; i < 10; i++) {
		cin >> arr[i];
		if (max < arr[i]) {
			max = arr[i];
			index = i;
		}
	}
	cout << max << endl << index;
	return 0;
}