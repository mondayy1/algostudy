#include <iostream>
using namespace std;
int main() 
{
    int n, sum , i;
    sum = 0;
    cin >> n;
    for( i = 1;i<=n;i++)
      {
        sum+=i;
      }
  
    cout << sum;
}