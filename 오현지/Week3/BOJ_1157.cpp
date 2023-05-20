// 검색하지 않고 시도 : 간단한 입출력, 대문자 변환 전까지
// 물어보지 않고 시도 : 대문자 변환까지 성공, 가장 많이 사용되는 알파벳
// 여러개 존재시 예외처리를 못했음
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	string S;
	vector <int>countS;
	cin >> S;
	int length = S.length();
	countS.resize(length);
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (S[i] == S[j]) {
				countS[i]++;
			}
		}
	}
	int max_index = countS[0];
	int index = NULL;
	for (int i = 0; i < length; i++) {
		if (length == 1) {
			max_index = 0;
			break;
		}
		else if (max_index < countS[i]) {
			max_index = i;
		}
	}
	S[max_index] = toupper(S[max_index]);
	cout << S[max_index];
}