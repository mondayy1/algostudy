#include <iostream>
#include <vector>
using namespace std;
//BOJ_3003

int main() {
	vector<int> answer = { 1,1,2,2,2,8 };

	vector<int> input(6);

	for (int i = 0; i < answer.size(); i++) {
		cin >> input[i];
	}
	for (int i = 0; i < 6; i++) {
		cout << answer[i]-input[i] << " ";
	}


	return 0;
}