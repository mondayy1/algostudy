#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> v;
  int i, idx;
  cin >> i >> idx;
  for (int j = 0; j < i; j++) {
    int k;
    cin >> k;
    v.push_back(k);
  }
  for (int j = 0; j < i; j++) {
    if (idx > v.at(j))
      cout << v.at(j) << " ";
  }
}