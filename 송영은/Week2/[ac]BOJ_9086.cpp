#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string str;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        cout << str.front() << str.back() << "\n";
    }

    return 0;
}