#include<iostream>
#include<string>
using namespace std;

int main()
{
	string X;
	string s;
	int N;
	int sum=0;
	cin >> N;
	cin >> X;
	for (int i = 0; i < N; i++) {
		s= X[i];
		sum += stoi(s);
	}

	cout << sum;
	return 0;
}