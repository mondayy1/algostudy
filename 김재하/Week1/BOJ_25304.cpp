#include <iostream>
using namespace std;
int main() 
{
  int X, N, a, b, sum;
  cin >> X >> N;
  sum = 0;
  for(int i = 1;i<=N;i++)
    {
      cin >> a >> b;
      sum += (a*b);
    }
  if(sum == X) cout << "Yes";
  else cout << "No";
  
}