#include <bits/stdc++.h>
using namespace std;

int main(void) {
   int chess;
   const int count[6] = { 1, 1, 2, 2, 2, 8 };
   for (int i = 0; i < 6; i++) {
      cin >> chess;
      cout << count[i] - chess << " ";
   }
   return 0;
}