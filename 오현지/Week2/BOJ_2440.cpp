/* 
별찍기 3번
소요 시간 : 2분 57초 소요
*/
#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - i; j++) {
			cout << '*';
		}
		cout << endl;
	}
}

vector<int> v;
v.push_bacK(1);
v.pop_back();