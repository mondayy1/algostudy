#include <iostream>
using namespace std;


int main(void)
{
  int num, T, C;
  int Q, D, N, P,q,d,n,p;

  Q = 25;
  D = 10;
  N = 5;
  P = 1;
  cin >> T;

  for(int i = 0;i<T;i++)
    {
      cin >> num;
      while(num>=Q) 
        {
          q++;
          num-=Q;
        }
      while(num>=D) 
        {
          d++;
          num-=D;
        }
      while(num>=N) 
        {
          n++;
          num-=N;
        }
      while(num>=P)
        {
          p++;
          num-=P;
        }
  cout << q << " " << d << " " << n << " " << p << "\n";
      q= 0;
      d =0;
      p = 0;
      n =0;
    }  
}
