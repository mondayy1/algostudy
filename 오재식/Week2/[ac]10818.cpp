#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> v;
  int i, idx, min = 1000000, max = -1000000;
  cin >> i;
  for (int j = 0; j < i; j++) {
    int k;
    cin >> k;
    v.push_back(k);
  }
  for (auto x : v) {
    if (x > max)
      max = x;
    if (x < min)
      min = x;
  }
  cout << min << " " << max;
}