#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> c = {1, 1, 2, 2, 2, 8};
  int m;
  for (int i = 0; i < 6; i++) {
    cin >> m;
    cout << c[i] - m << " ";
  }
  return 0;
}