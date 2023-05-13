#include <iostream>
#include <vector>
using namespace std;
vector <int> v;
int main()
{
  int n, m, i, j, k, l, a, p;
  cin >> n >> m;
  v.assign(n,0);
  
  for(l = 0;l<m;l++)
    {
      cin >> i >> j >> k;
       for(p = i-1;p<j;p++)
         {  
            v[p] = k;
         }   
      
    }
  for(l = 0;l<n;l++)
    {
     cout << v[l] << " ";
      
    }
}