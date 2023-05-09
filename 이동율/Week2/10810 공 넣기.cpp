#include<iostream>
#include<vector>

using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<int> v(n+1);
    for (int i = 0; i < m; i++) {
        int s, e, value;
        cin >> s >> e >> value;
        for (int j = s; j <= e; j++) {
            v[j] = value;
        }
    }
    for (auto i = v.begin()+1; i != v.end(); i++) {
        cout << *i << " ";
    }
    return 0;
}