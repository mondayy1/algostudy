#include <iostream>

using namespace std;

int main() {
  int n, m, i, j, k;

  cin >> n >> m;
  int arr[n];
  for (int i = 0; i < n; i++) {
    arr[i] = 0;
  }

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
