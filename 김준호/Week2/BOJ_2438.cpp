#include<iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		int cnt = 1;
		while (cnt != i + 1) {
			cout << "*";
			cnt++;
		}
		cout << "\n";
	}
	return 0;
}