#include <iostream>

using namespace std;

int main() {
  int sum, total, a, b, s = 0;
  cin >> sum;
  cin >> total;

  for (int i = 0; i < total; i++) {
    cin >> a >> b;
    s += a * b;
  }

  if (sum == s) {
    cout << "Yes";

  } else {
    cout << "No";
  }
}
