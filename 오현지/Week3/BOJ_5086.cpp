/*1. ���� - BOJ5086 
�ҿ�ð� 11��
������ �������µ� �� ������ �� ��Ǯ�
��Ȳ ���� ����
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