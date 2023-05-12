#include <iostream>
using namespace std;
#define endl '\n'

int main(void) {

	int num = 0;
	cin >> num;

	for (int i = num; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}

//제목 : 별 찍기 - 3
//문제 : 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
//https://www.acmicpc.net/problem/2440