/*1. 수학 - BOJ5086 
소요시간 11분
간단한 문제였는데 전 문제들 다 못풀어서
당황 많이 했음
*/

#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n1, n2;
	cin >> n1 >> n2;
	for (int i = 0; n1 != 0 && n2 != 0; i++) {
		if (n2 % n1 == 0)cout << "factor" << '\n';
		else if (n1 % n2 == 0) cout << "multiple" << '\n';
		else cout << "neither" << '\n';
		cin >> n1 >> n2;
	}
}