#include <bits/stdc++.h>
using namespace std;

int main(void) {
   string s;
   int count[26] = { 0, };
   
   cin >> s;
   for (int i = 0; s[i]; i++) {
      if ('a' <= s[i] && s[i] <= 'z') count[s[i] - 'a']++;
      else if ('A' <= s[i] && s[i] <= 'Z') count[s[i] - 'A']++;
   }

   int maxValue = -1, maxIndex = -1, maxCount = 0;
   for (int i = 0; i < 26; i++) {
      if (maxValue < count[i]) {
         maxValue = count[i];
         maxIndex = i;
         maxCount = 1;
      } else if (maxValue == count[i]) {
         maxCount++;
      }
   }

   if (maxCount > 1) cout << "?\n";
   else cout << (char)(maxIndex + 'A') << "\n";
   return 0;
}