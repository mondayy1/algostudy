#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    string word, revert;
    cin >> word;
    
    for (int i = 0; i < word.length(); i++) {
        revert.push_back(word[word.length() - i - 1]);
    }
    
    if (word == revert) {
        cout << 1 << "\n";
    } else {
        cout << 0 << "\n";
    }
    
    return 0;
}
