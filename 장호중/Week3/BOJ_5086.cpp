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

    while (1) {
        int a, b;

        cin >> a >> b;

        if (a == 0 && b == 0) break;

        if (a > b)
        {
            if (a % b == 0) cout << "multiple" << endl;
            else cout << "neither" << endl;
        }
        else if (a < b)
        {
            if (b % a == 0) cout << "factor" << endl;
            else cout << "neither" << endl;
        }
    }

    return 0;
}