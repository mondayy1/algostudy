#include<iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	for (int i = 1; i < 10; i++)
	{
		cout << a;
		cout<< " * ";
		cout<< i;
		cout << " = ";
		cout << a * i<<endl;

	}
	
	return 0;
}