#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<string> c = {"factor", "multiple", "neither"};
  int n = 1, m = 1;
  while (1) {
    cin >> n >> m;
    if (n == 0 || m == 0)
      break;
    if (m % n == 0)
      cout << c[0] << "\n";
    else if (n % m == 0)
      cout << c[1] << "\n";
    else
      cout << c[2] << "\n";
  }
  return 0;
}