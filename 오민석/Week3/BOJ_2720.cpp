#include <bits/stdc++.h>
using namespace std;

int main(void) {
   int t;
   cin >> t;

   const int money[4] = { 25, 10, 5, 1 };
   while (t--) {
      int c;
      cin >> c;

      for (int i = 0; i < 4; i++) {
         cout << c / money[i] << " ";
         c %= money[i];
      }
      cout << "\n";
   }
   return 0;
}