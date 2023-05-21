/*체스 갯수
소요시간 : 1시간 이상
*/
#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int before_arr[6] = { 0 };
	int after_arr[6] = { 1, 1, 2, 2, 2, 8 };
	int difference_arr[6] = { 0 };
	for (int i = 0; i < 6; i++) {
		cin >> before_arr[i];
		difference_arr[i] = after_arr[i] - before_arr[i];
	}
	for (int i = 0; i < 6; i++) {
		cout << difference_arr[i] << ' ';
	}
	return 0;
}