#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int T = 0;

    cin >> T;
    vector<int> C(T);

    for (int i = 0; i < T; i++)
        cin >> C.at(i);

    for (int i = 0; i < T; i++)
    {
        cout << C.at(i) / 25 << " ";
        C.at(i) %= 25;
        cout << C.at(i) / 10 << " ";
        C.at(i) %= 10;
        cout << C.at(i) / 5 << " ";
        C.at(i) %= 5;
        cout << C.at(i) << "\n";
    }
}
