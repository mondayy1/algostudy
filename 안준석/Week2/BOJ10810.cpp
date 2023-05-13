#include <bits/stdc++.h>

using namespace std;

int main(){
   int n, m;
   cin >> n >> m;
   vector<int> bucket(n);
   int a,b;
   int k;
   for(int i=0;i<m;i++){
       cin >> a >> b >> k;
       for(int j=a-1;j<b;j++){
           bucket[j] = k;
       }
       
   }
    for(int i=0;i<n;i++){
        cout << bucket[i] << " ";
    }
}
