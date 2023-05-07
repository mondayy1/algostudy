#include <iostream>

using namespace std;

int main() {
  string sentence;
  int input;

  cin >> sentence;
  cin >> input;

  cout << sentence[input - 1];
}
