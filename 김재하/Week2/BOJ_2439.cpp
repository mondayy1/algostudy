#include <iostream>
using namespace std;
int main()
{
    int i, j ,k, n;  
    cin  >> n;
    for (i = 0; i < n; i++)
    {
        for (k = 1; k < n-i; k++)
        {
            cout << " ";
        }
        for (j = 0; j < i+1; j++)
            cout << "*";
        cout << "\n";
    }
}