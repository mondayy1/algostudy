#include <bits/stdc++.h>
using namespace std;

int main(void) {
   int a, b;
   while (1) {
      cin >> a >> b;
      if (!a && !b) break;

      if (a % b == 0) cout << "multiple\n";
      else if (b % a == 0) cout << "factor\n";
      else cout << "neither\n";
   }
   return 0;
}