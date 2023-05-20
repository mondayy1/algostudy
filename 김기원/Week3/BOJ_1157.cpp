#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int max = 0, cnt = 0;
    char res = 0;
    vector<int> v(26);
    string s;
    cin >> s;
    
    for (int i = 0; i < s.length(); i++) {
        v[toupper(s[i]) - 'A']++;
    }
    
    
    for (int i = 0; i < 26; i++) {
        if (v[i] > max) {
            max = v[i];
            res = i + 'A';
        }
    }
    
    for (int i = 0; i < 26; i++) {
        if (v[i] == max) cnt++;
    }
    
    if (cnt == 1) cout << res << "\n";
    else cout << "?" << "\n";
    
    return 0;
}
