#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a;
    map<int, int, greater<>> m;
    cin >> a;
    for (int i = 0; i < a.length(); i++) {
        m[a[i]-48]++;
    }
    for (auto i = m.begin(); i != m.end(); i++) {
        for (int j = 0; j < i->second; j++) {
            cout << i->first;
        }
    }
}