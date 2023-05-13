/*공 넣기 (4-5단계)
소요시간 : 13분 6초
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
	int N;
	int M;
	cin >> N >> M;
	vector<int> arr;
	arr.resize(3);
	vector<int> basket;
	basket.resize(N);
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[j];
		}
		for (int k = arr[0] - 1; k <= arr[1] - 1; k++) {
			basket[k] = arr[2];
		}
	}
	for (int g = 0; g < N; g++) {
		cout << basket[g] << ' ';
	}

}