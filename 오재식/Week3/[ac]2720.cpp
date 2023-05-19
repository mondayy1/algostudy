#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, money, Quarter = 25, Dime = 10, Nickel = 5, Penny = 1;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> money;
    cout << (money / Quarter) << " ";
    money %= Quarter;
    cout << (money / Dime) << " ";
    money %= Dime;
    cout << (money / Nickel) << " ";
    money %= Nickel;
    cout << (money / Penny) << "\n";
  }
  return 0;
}