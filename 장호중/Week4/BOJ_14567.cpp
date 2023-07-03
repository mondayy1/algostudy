#include <bits/stdc++.h>
#define pb push_back
#define all(a) a.begin(),a.end()
#define endl '\n'
#define ll long long
#define pll pair<ll, ll>
#define INF 99999999
using namespace std;
vector<int> grid[1005];
int degree[1005] = {0}, ans[1005] = {0}, n, m;

void topology()
{
    queue<pll> q;

    for (int i = 1; i <= n; i++) {
        if (degree[i] == 0) q.push({i, 1});
    }

    while (!q.empty()) {
        int cur = q.front().first, cnt = q.front().second;
        q.pop();
        ans[cur] = cnt;

        for (auto i: grid[cur]) {
            degree[i]--;

            if (degree[i] == 0) q.push({i, cnt+1});
        }
    }
}

int main()
{
    int i, j, a, b;

    cin >> n >> m;

    for (i = 0; i < m; i++) {
        cin >> a >> b;
        grid[a].pb(b);
        degree[b]++;
    }

    topology();

    for (i = 1; i <= n; i++) {
        cout << ans[i] << ' ';
    }
}