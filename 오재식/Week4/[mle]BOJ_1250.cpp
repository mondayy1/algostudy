#include <algorithm>
#include <iostream>
#include <vector>
#define pp pair<int, int>
using namespace std;
bool cmp(const pp &a, const pp &b) {
  if (a.second == b.second)
    return a.first < b.first;
  return a.second > b.second;
}
int main() {
  string problem;
  int number, k;
  cin >> number >> k;
  cin >> problem;
  vector<pair<int, int>> a;
  int j = 1;
  for (int i = 0; i < number; i++) {

    if (problem[i] != problem[i + 1]) {
      a.push_back({i - j + 1, j});
      j = 1;
    } else {
      j++;
    }
  }
  sort(a.begin(), a.end(), cmp);
  int res = 1;
  for (auto num : a) {
    problem.erase(num.first, num.second);
    if (num.first <= k - 1 && k - 1 <= num.first + num.second) {
      cout << res;
      break;
    }
    res++;
  }
}