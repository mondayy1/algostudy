#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size, m;
    int x, y, z;

    cin >> size >> m;

    vector<int> n(size, 0);
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y >> z;
        for (x; x <= y; x++)
        {
            n[x - 1] = z;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << n[i] << " ";
    }
    return 0;
}