#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, m, i, j, k;

  cin >> n >> m;
  vector<int> arr(n, 0);

  for (int y = 0; y < m; y++) {
    cin >> i >> j >> k;
    for (int f = i; f <= j; f++) {
      arr[f - 1] = k;
    }
  }

  for (int x = 0; x < n; x++) {
    cout << arr[x] << ' ';
  }
}
