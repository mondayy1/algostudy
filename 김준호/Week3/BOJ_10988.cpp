#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	//앞뒤 모두 똑같은 단어
	string s;
	cin >> s;
	int t = s.size() - 1;
	for (int i = 0; i < s.size() / 2; i++)
	{
		cout << s[i] << " " << s[t] << "\n";
		if (s[i] == s[t])
		{
			t--;
			continue;
		}
		else {
			cout << 0;
			return 0;
		}
	}
	cout << 1;
	return 0;
}