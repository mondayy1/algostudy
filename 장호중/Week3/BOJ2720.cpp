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

    int i, n, a;

    cin >> n;

    for (i = 0; i < n; i++) {
        int quarter, dime, nickel;

        cin >> a;

        quarter = a / 25, a -= quarter * 25;
        dime = a / 10, a -= dime * 10;
        nickel = a / 5, a -= nickel * 5;

        cout << quarter << ' ' << dime << ' ' << nickel << ' ' << a << endl;
    }

    return 0;
}