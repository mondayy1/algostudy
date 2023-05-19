#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main() {

	string str;
	cin >> str;

	vector<char> v;
	
	//¾ËÆÄºª º¤ÅÍ »ý¼º
	for (int i = 65; i <= 90; i++) {
		v.push_back((char)i);
	}

	int n = v.size();
	vector<int> v1(n);

	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = 0; j < str.size(); j++) {
			if (v[i] == str[j] || v[i] == str[j] -32)
				count++;
		}
		v1[i] = count;
	}
	int max = 0;
	char ch;

	/*for (int i = 0; i < n; i++) {
		cout << v1[i] << "\n";
	}*/
	
	for (int i = 0; i < n; i++) {
		if (max < v1[i]) {
			max = v1[i];
			ch = v[i];
		}
		else if (max == v1[i]) {
			max = v1[i];
			ch = '?';
		}
	}
	cout << ch;
	return 0;
}