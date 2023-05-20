#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, x;
    vector<int> vec(10000);

    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> vec.at(i);
    }

    for (int i = 0; i < n; i++)
    {
        if (vec[i] < x)
        {
            cout << vec[i] << " ";
        }
    }
    return 0;
}