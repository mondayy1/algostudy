/* �ּ�,�ִ� (4-3�ܰ�)
�ҿ�ð� : 7�� 11��
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
	int N;
	vector<int> arr;
	cin >> N;
	arr.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < N; i++) {
		if (min > arr[i]) min = arr[i];
		else if (max < arr[i]) max = arr[i];
	}
	cout << min << ' ' << max;
}