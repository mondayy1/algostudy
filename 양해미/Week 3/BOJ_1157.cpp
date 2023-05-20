#include <iostream>
#include <string>
using namespace std;
#define endl '\n'

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string str;
    cin >> str;

    int i, j, n = 0;
    int idx = 0;
    int max = -10;
    int flag = 0;
    int len = str.length();

    for (int i = 0; i < len; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;

    for (i = 0; i < len; i++)
    {
        n = 0;

        for (j = i + 1; j < len; j++)
        {
            if (str[i] == str[j])
            {
                n++;
                str.erase(j, 1);
                len--;
                j--;
            }
        }
        if (max < n)
        {
            flag = 0;
            max = n;
            idx = i;
        }
        else if (max == n)
            flag = 1;
    }
    if (flag == 1)
        cout << "?";
    else
        cout << str[idx];
}