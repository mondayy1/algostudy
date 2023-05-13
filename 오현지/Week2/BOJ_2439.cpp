/*
별찍기 2번
소요시간 : 8분 14초 소요
*/
#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (j < N - i - 1) { cout << ' '; }
			else cout << '*';
		}
		cout << endl;
	}
	return 0;
}