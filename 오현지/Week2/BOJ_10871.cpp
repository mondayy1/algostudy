/* X보다 작은 수 (4-2단계)
소요시간 : 4분 5초
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> arr;
	int N;
	int X;
	cin >> N >> X;
	arr.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++) {
		if (X > arr[i]) {
			cout << arr[i] << ' ';
		}
	}
	return 0;
}