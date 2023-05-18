#include<iostream>
#include<map>
using namespace std;
int main()
{
	//앞뒤 모두 똑같은 단어
	string s;
	char result;
	int max = 0;
	int max_num = 1;
	cin >> s;
	map<char, int>m;
	char c = 'a';
	for (int i = 0; i < 26; i++)
	{
		m.insert(make_pair(c,0));
		c++;
	}
	//가장 많이 사용된 알파벳이 무엇인지 알아내기 대문자와 소문자 구분x m과 M은 같은것
	//tolower(), toupper()
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A' || s[i] <= 'Z')
		{
			s[i]=tolower(s[i]);
		}
	}
	c = 'a';
	for (int i = 0; i < s.size(); i++)
	{
		m[s[i]]++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (max < m[c])
		{
			max = m[c];
			max_num = 1;
			result = c;
		}
		else if (max == m[c])
		{
			max_num++;
		}
		c++;
	}
	
	if (max_num == 1)
	{
		c = toupper(result);
		cout << c;
	}
	else {
		cout << "?";
	}
	
//여러개일 경우 ?
	//한개->대문자로 표기
	return 0;
}

