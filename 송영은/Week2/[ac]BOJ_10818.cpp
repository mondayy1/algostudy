#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, temp, min = 1000000, max = -1000000;
    vector<int> vec;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }

    for (int i = 0; i < n; i++)
    {
        if (vec[i] < min)
        {
            min = vec[i];
        }
        if (vec[i] > max)
        {
            max = vec[i];
        }
    }

    cout << min << " " << max;

    return 0;
}