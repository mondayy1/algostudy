#include <bits/stdc++.h>
using namespace std;

int main(void) {
   string s;
   cin >> s;

   deque<char> dq;
   for (int i = 0; s[i]; i++) dq.push_back(s[i]);

   while (!dq.empty()) {
      if (dq.size() == 1) break;
      if (dq.front() != dq.back()) break;

      dq.pop_front();
      dq.pop_back();
   }

   if (dq.size() <= 1) cout << "1\n";
   else cout << "0\n";
   return 0;
}