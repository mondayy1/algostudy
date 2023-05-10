#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

int main(void) {
	int N = 0;

	cin >> N;
	vector<int> arr(N);

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int Search_data = 0;
	int cnt = 0;

	cin >> Search_data;
	for (int j = 0; j < N; j++) {
		if (Search_data == arr[j]) cnt++;
	}

	cout << cnt;

	return 0;
}

//https://www.acmicpc.net/problem/10807 