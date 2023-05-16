#include<iostream>
using namespace std;
int main()
{
	int N,count=0;
	cin >> N;
	
	for (int i = 1; i <=N; i++)
	{
		count = 0;
		for (int j = N - i;j > 0; j--)
		{
			cout << "";
		}

		while (count != i) {
			cout << "*";
			count++;
		}
		cout << "\n";
	}
	return 0;
}