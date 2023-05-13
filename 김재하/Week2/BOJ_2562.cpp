#include <iostream>
#include <vector>>
using namespace std;
vector <int> v;
int main()
{
  
  int num, i, max, m;
  for(i = 0; i<9;i++)
    {
      cin >> num;
      v.push_back(num);
    }
  m = 0;
  for(i =0;i<9;i++)
    {
      if(v[m] < v[i]) 
      {
        m = i;
      }
    }
  cout << v[m] << endl << m + 1;
}