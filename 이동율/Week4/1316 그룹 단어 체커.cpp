#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    int cnt=0;
    for (int i = 0; i < t; i++) {
        map<char, bool> word;
        bool check = true;
        string w;
        cin >> w;
        for (int j = 0; j < w.size(); j++) {
            if (w[j] != w[j + 1]) {
                if (word[w[j]] == true) {
                    check = false;
                    break;
                }
                word[w[j]] = true;
            }
        }
        if (check == true) cnt++;
    }
    cout << cnt;
}