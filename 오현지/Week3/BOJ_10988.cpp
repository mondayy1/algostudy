/* 1차시도 실패(9분 21초) : 이것도 for문 조건 지정 / string함수 잘 모름
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string S;
	string reverseS;
	cin >> S;
	int length = S.length();
	for (int i = length; i >= 0; i--) {
		int j = 0;
		reverseS[i] = S[j];
		j++;
	}
	if (S == reverseS) cout << 1;
	else cout << 0;
}