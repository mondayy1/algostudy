//1���õ� ����(15��) : ��Ÿ�� ���� <- for�� ���ǹ� �߸��Ѱ����� ����

#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int peice[6] = { 0,0,0,0,0,0 };
	int count[6] = { 0,0,0,0,0,0 };
	int after_peice[6] = { 1,1,2,2,2,8 };

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	for (int i = 0; i < 6; i++) {
		cin >> peice[i];
		if (peice[i] > after_peice[i]) {
			for (int j = 1; peice[i] >= after_peice[i]; j++) {
				peice[j]--;
				count[j] = -j;
			}
		}
		else if (peice[i] < after_peice[i]) {
			for (int j = 1; peice[i] <= after_peice[i]; j++) {
				peice[j]++;
				count[j] = j;
			}
		}
		else continue;

	}
	for (int i = 0; i < 6; i++) {
		cout << count[i] << ' ';
	}


}
