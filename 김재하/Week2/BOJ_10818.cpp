#include <iostream>
#include <vector>
using namespace std;
vector <int> v;
int main()
{
  int n,cnt,num, max, min;
  cin >> n;
  cnt = 0;
  while(cnt != n)
    {
      cnt++;
      cin >> num;
      v.push_back(num);
    }
  
  max = v[0];
  min = v[0];
  for(int i = 0; i<v.size();i++)
    {    
      if(v[i] > max) max = v[i];
      if(v[i] < min) min = v[i];
    }
  cout << min << " " << max;
}