#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;

int main()
{
    string str;
    int max = 0;
    cin >> str;
    map<char, int> m;
    map<char, int>::iterator it;
    char result;
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = toupper(str[i]);
        if (m.find(str[i]) == m.end())
        {
            m.insert(make_pair(str[i], 1));
        }
        else
        {
            m[str[i]]++;
        }
    }

    for (it = m.begin(); it != m.end(); it++)
    {
        if (it->second > max)
        {
            max = it->second;
            result = it->first;
        }
        else if (it->second == max)
        {
            result = '?';
        }
    }
    cout << result;
}