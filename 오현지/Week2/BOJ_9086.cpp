/*
문자열 (5-3단계)
소요시간 : 4분 48초
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