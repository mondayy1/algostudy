/*���� ���� (4-1�ܰ�)
�ҿ�ð� : 9�� 24��
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
	int N;
	int compareN;
	vector<int> arr;
	cin >> N;
	arr.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	cin >> compareN;
	int count = 0;
	for (int i = 0; i < N; i++) {
		if (compareN == arr[i]) {
			count++;
		}
	}
	cout << count;
	return 0;
}