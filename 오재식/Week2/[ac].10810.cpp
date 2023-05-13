#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  vector<int> v(n);
  for (int i = 0; i < m; i++) {
    int front, end, num;
    cin >> front >> end >> num;
    for (int j = front-1; j < end; j++) {
      v.at(j) = num;
    }
  }
  for (int i = 0; i < n; i++)
    cout << v.at(i) << " ";
}