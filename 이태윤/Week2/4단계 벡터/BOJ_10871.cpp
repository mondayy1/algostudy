#include <iostream>
#include <vector>

using namespace std;

int main() {
  int A, input, B = 0;
  cin >> A;
  vector<int> arr(A);
  cin >> input;

  for (int i = 0; i < A; i++) {

    cin >> B;
    arr[i] = B;
  }

  for (int i = 0; i < A; i++) {
    if (arr[i] < input) {
      cout << arr[i] << " ";
    }
  }
}
