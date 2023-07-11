#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec(100);
    int n, v, temp, count = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> vec.at(i);
        // vec.push_back(temp);
    }
    cin >> v;

    for (int i = 0; i < n; i++)
    {
        if (vec[i] == v)
            count += 1;
    }
    cout << count;

    return 0;
}