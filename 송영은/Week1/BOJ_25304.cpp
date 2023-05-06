#include <iostream>
using namespace std;

int main()
{
    int x, n, a, b, j[100];
    int y = 0;
    cin >> x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        j[i] = a * b;
    }
    for (int i = 0; i < n; i++)
    {
        y += j[i];
    }
    if (y == x)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}