#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <queue>
#define pb push_back
#define all(a) a.begin(), a.end()
#define endl '\n'
using ll = long long;
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    int i, j, k, dp_max[200][200], dp_min[200][200];
    string s;

    cin >> s;

    int n = s.length() / 2 + 1;
    for (i = 0; i < 200; i++) {
        for (j = 0; j < 200; j++) {
            dp_max[i][j] = -1000000;
            dp_min[i][j] = 1000000;
        }
    }

	for (i = 0; i < n; i++) {
		dp_max[i][i] = s[i * 2] - '0';
		dp_min[i][i] = s[i * 2] - '0';
	}

	for (int calc = 1; calc < n; calc++) {
		for (i = 0; i < n - calc; i++) {
			j = calc + i;
			for (k = i; k < j; k++) {
				if (s[k * 2 + 1] == '-') {
					dp_max[i][j] = max(dp_max[i][k] - dp_min[k + 1][j], dp_max[i][j]);
					dp_min[i][j] = min(dp_min[i][k] - dp_max[k + 1][j], dp_min[i][j]);
				}
				else if (s[k * 2 + 1] == '+') {
					dp_max[i][j] = max(dp_max[i][k] + dp_max[k + 1][j], dp_max[i][j]);
					dp_min[i][j] = min(dp_min[i][k] + dp_min[k + 1][j], dp_min[i][j]);
				}
			}
		}
	}

	cout << dp_min[0][n - 1];
}