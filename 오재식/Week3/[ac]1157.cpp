#include <iostream>
#include <map>
using namespace std;

int main() {
  string a;
  cin >> a;
  int max = -99999;
  char result;
  map<char, int> m;
  map<char, int>::iterator it;
  for (int i = 0; i < a.length(); i++) {
    a.at(i) = toupper(a.at(i));
    if (m.find(a.at(i)) == m.end()) {
      m[a.at(i)] = 0;
    } else {
      m[a.at(i)] = m[a.at(i)] + 1;
    }
  }

  for (it = m.begin(); it != m.end(); it++) {
    if (it->second == max) {
      result = '?';
    } else if (it->second > max) {
      max = it->second;
      result = it->first;
    }
  }
  cout << result;
  return 0;
}