#include <iostream>
#include <string>
using namespace std;
int main() 
{
  string str;
  int num, i;
  cin >> str;

  for (i = 0; i < str.size(); i++) 
  {
    while(str[i] != str[str.size() - 1 - i])
    {
       cout << '0';
       return 0;
    }
    
  }
  cout << '1';
}