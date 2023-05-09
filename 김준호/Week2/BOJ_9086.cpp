#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main()
{
	int t;
	int i = 0;
	cin >> t;
	vector<string>v(t);
	while (t > 0)
	{
		cin >> v[i];
		t--;
		i++;
	}
	for (i = 0; i < v.size(); i++) {
		cout << v[i].front() << v[i].back()<<endl;
	}
	return 0;
}