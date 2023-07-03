#include <bits/stdc++.h>
#define pb push_back
#define all(a) a.begin(),a.end()
#define endl '\n'
#define ll long long
#define pll pair<ll, ll>
#define INF 99999999
using namespace std;
int n, m;
int grid[10][10] = {0}, gridd[10][10] = {0};
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int bfs()
{
    int i, j, cnt = 0;
    queue<pll> q;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            gridd[i][j] = grid[i][j];
            if (gridd[i][j] == 2) q.push({i, j});
        }
    }

    while (!q.empty()) {
        int cur_x = q.front().first, cur_y = q.front().second;
        q.pop();

        for (i = 0; i < 4; i++) {
            int next_x = cur_x + dx[i], next_y = cur_y + dy[i];

            if (next_x >= 1 && next_x <= n && next_y >= 1 && next_y <= m)
            {
                if (gridd[next_x][next_y] == 0)
                {
                    gridd[next_x][next_y] = 2;
                    q.push({next_x, next_y});
                }
            }
        }
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            if (gridd[i][j] == 0) cnt++;
        }
    }

    return cnt;
}

int main() 
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int i, j, a, ans = 0;

    cin >> n >> m;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            cin >> a;
            grid[i][j] = a;
        }
    }

    for (int w1_x = 1; w1_x<= n; w1_x++) {
        for (int w1_y = 1; w1_y <= m; w1_y++) {
            if (grid[w1_x][w1_y] != 0) continue;

            for (int w2_x = 1; w2_x <= n; w2_x++) {
                for (int w2_y = 1; w2_y <= m; w2_y++) {
                    if (grid[w2_x][w2_y] != 0) continue;
                    
                    for (int w3_x = 1; w3_x <= n; w3_x++) {
                        for (int w3_y = 1; w3_y <= m; w3_y++) {
                            if (grid[w3_x][w3_y] != 0) continue;

                            if ((w1_x == w2_x && w1_y == w2_y) || (w2_x == w3_x && w2_y == w3_y) || (w3_x == w1_x && w3_y == w1_y)) continue;

                            grid[w1_x][w1_y] = 1;
                            grid[w2_x][w2_y] = 1;
                            grid[w3_x][w3_y] = 1;

                            ans = max(bfs(), ans);
                            
                            grid[w1_x][w1_y] = 0;
                            grid[w2_x][w2_y] = 0;
                            grid[w3_x][w3_y] = 0;
                        }
                    }

                }
            }

        }
    }

    cout << ans << endl;

    return 0;
}