/*
���ڿ� (5-3�ܰ�)
�ҿ�ð� : 4�� 48��
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
	string S;
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> S;
		cout << S.front() << S.back() << endl;
	}
}