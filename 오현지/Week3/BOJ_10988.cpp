/* �����ڿ��� �ص� ���� �������� Ȯ��
�ҿ�ð� : 1�ð� �̻�
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string S;
	string reverseS = "";
	cin >> S;
	int length = S.length();
	for (int i = length - 1; i >= 0; i--) {
		reverseS += S[i];
	}
	if (S.compare(reverseS) == 0) cout << 1;
	else cout << 0;
}