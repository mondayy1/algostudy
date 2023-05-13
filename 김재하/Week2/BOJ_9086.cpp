#include <iostream>
#include <string.h>
using namespace std;
string str;
int main()
{
  char A[100];
  int num,i;
  cin >> num;
  for(i = 0; i<num*2;i++)
    {
      cin >> str;
      A[i] = str.front();
      A[i+1] = str.back();
      i++;
    }
  for(i = 0 ; i<num*2;i++)
    {
      cout << A[i] << A[i+1];
      i++;
      cout << "\n";
    }
  
}