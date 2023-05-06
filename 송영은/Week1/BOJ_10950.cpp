#include <iostream>
using namespace std;

int main()
{
    int n;
    int a, b, j[100], i;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        j[i] = a + b;
    }
    for (i = 0; i < n; i++)
    {
        cout << j[i] << endl;
    }
    return 0;
}