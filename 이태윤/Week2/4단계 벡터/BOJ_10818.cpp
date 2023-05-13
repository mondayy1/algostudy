#include <iostream>
#include <vector>

using namespace std;

int main() {
  int A, input, B, min, max = 0;
  cin >> input;
  vector<int> arr(input);

  for (int i = 0; i < input; i++) {
    cin >> A;
    arr[i] = A;
  }

  min = arr[0];
  max = arr[0];

  for (int i = 1; i < input; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  cout << min << " " << max;
}
