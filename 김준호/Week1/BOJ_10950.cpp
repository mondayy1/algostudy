#include<iostream>

using namespace std;
int main()
{
	int t,a,b;
	int* arr;

	cin >> t;
	arr = new int[t];
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		arr[i] = a + b;
	}
	for (int i = 0; i < t; i++)
	{
		cout << arr[i] << endl;
	}
	delete[]arr;
	return 0;
}