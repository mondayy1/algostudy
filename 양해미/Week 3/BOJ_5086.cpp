#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n1,
        n2 = 0;
    while (1)
    {
        cin >> n1 >> n2;
        if (n1 == 0 && n2 == 0)
            return 0;

        if (n2 % n1 == 0)
        {
            cout << "factor"
                 << "\n";
        }
        else if (n1 % n2 == 0)
        {
            cout << "multiple"
                 << "\n";
        }
        else
        {
            cout << "neither"
                 << "\n";
        }
    }
}