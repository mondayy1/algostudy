#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;

	if (y > 0) (x > 0) ? cout << 1 : cout << 2;
	else (x < 0) ? cout << 3 : cout << 4;

	return 0;
}