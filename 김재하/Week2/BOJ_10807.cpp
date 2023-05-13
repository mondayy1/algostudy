#include <iostream>
#include <vector>
using namespace std;
vector <int> v;
int main()
{
  int n,m,cnt,num;
  cin >> n;
  cnt = 0;
  while(cnt != n)
    {
      cnt++;
      cin >> num;
      v.push_back(num);
      
      
    }
  cin >> m;
  cnt = 0;
  for(int i = 0; i<n;i++)
    {
      if(v[i]==m) cnt++;
    }
  cout << cnt;
  
}