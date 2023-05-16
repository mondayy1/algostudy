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
    
    int i;
    string s;

    cin >> s;

    for (i = 0; i < s.length()/ 2; i++) {
        if (s[i] != s[s.length() - i - 1]) break;
    }

    if (i == s.length() / 2) cout << 1;
    else cout << 0;

    return 0;
}