#include <bits/stdc++.h>
#define pb push_back
#define all(a) a.begin(),a.end()
#define endl '\n'
#define ll long long
#define pll pair<ll, ll>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int i, max = -1, flag = 0;
    char a;
    string s;
    vector<int> ans(26, 0);

    cin >> s;

    for (i = 0; i < s.length(); i++) {
        ans[tolower(s[i]) - 'a']++;
    }
    
    for (i = 0; i < 26; i++) {
        if (ans[i] > max)
        {
            max = ans[i];
            a = i + 'A';
            flag = 0;
        }
        else if (ans[i] == max) flag = 1;
    }

    if (flag) cout << '?' << endl;
    else cout << a << endl;
    
    return 0;
}