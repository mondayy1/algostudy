// �˻����� �ʰ� �õ� : ������ �����, �빮�� ��ȯ ������
// ����� �ʰ� �õ� : �빮�� ��ȯ���� ����, ���� ���� ���Ǵ� ���ĺ�
// ������ ����� ����ó���� ������
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