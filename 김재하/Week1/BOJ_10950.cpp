#include <iostream>
using namespace std;
int main() 
{
  int n, a, b;
  int A[101];
  cin >> n;
  for(int i = 0;i<n;i++)
    {
      cin >> a >> b;
      A[i] = a+b;
    }
  for(int i = 0;i<n;i++)
    {
      cout << A[i] << endl;
    }
}