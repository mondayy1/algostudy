#include <bits/stdc++.h>
#define pb push_back
#define all(a) a.begin(),a.end()
#define endl '\n'
#define ll long long
#define pll pair<ll, ll>
#define INF 99999999
using namespace std;
vector<int> grid[10005];
int degree[10005] = {0}, times[10005] = {0};
int n, m;

int topology()
{
    int ans = 0;
    priority_queue<pll, vector<pll>, greater<pll>> q;

    for (int i = 1; i <= n; i++) {
        if (degree[i] == 0) q.push({times[i], i});
    }

    while (!q.empty()) {
        int cur = q.top().second, cnt = q.top().first;
        q.pop();

        //cout << cnt << endl;

        ans = cnt;

        for (auto i: grid[cur]) {
            degree[i]--;

            if (degree[i] == 0) q.push({cnt + times[i], i});
        }
    }

    return ans;
}

int main()
{
    int i, j, t, a;

    cin >> n;

    for (i = 1; i <= n; i++) {
        cin >> t >> m;
        times[i] = t;
        for (j = 0; j < m; j++) {
            cin >> a;
            grid[a].pb(i);
            degree[i]++;
        }
    }

    cout << topology();
}