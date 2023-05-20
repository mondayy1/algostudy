#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t, n, a, b, c, d, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        a = n / 25;
        k = n % 25;
        b = k / 10;
        k = k % 10;
        c = k / 5;
        k = k % 5;
        d = k / 1;
        cout << a << " " << b << " " << c << " " << d << "\n";
    }
    return 0;
}