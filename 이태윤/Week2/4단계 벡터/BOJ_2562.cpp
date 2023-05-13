#include <iostream>
#include <vector>

using namespace std;

int main() {
  int input, max;
  int count = 1;
  vector<int> arr;

  for (int i = 0; i < 9; i++) {
    cin >> input;
    arr.push_back(input);
  }

  max = arr[0];

  for (int i = 0; i < 9; i++) {
    if (arr[i] > max) {
      max = arr[i];
      count = i + 1;
    }
  }

  cout << max << "\n" << count;
}
