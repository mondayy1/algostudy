#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (b < 45)
    {
        a -= 1;
        b += 15;
        if (a == -1)
        {
            a = 23;
        }
        cout << a << " " << b << endl;
    }
    else if (b >= 45 && b < 60)
    {
        b -= 45;
        cout << a << " " << b << endl;
    }
    return 0;
}