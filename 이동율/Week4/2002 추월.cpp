#include <iostream>
#include <map>

using namespace std;

int main(void) {
	int num;
	cin >> num;
	map<string, int> carnum;
	for (int i = 1; i <= num; i++) {
		string car;
		cin >> car;
		carnum[car] = i;
	}
	bool exit[1001] = { false, };//나간 차량
	int cnt = 0; //추월 차량 수
	int now = 1; //순서
	while (1) {
		string c;
		cin >> c;
		if (carnum[c] != now) {
			if (exit[carnum[c]] == true) continue;
			cnt++;
			exit[carnum[c]] = true; 
		}
		else {
			exit[carnum[c]] = true;
			while (exit[now] == true) now++;
			if (now >= num) break;
		}

	}
	cout << cnt;
}