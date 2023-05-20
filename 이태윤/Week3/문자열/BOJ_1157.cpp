#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string word;
    cin >> word;
    
    vector<int> freq(26, 0);

    for (char c : word) {
        freq[toupper(c) - 'A']++;
    }

    int max_freq = *max_element(freq.begin(), freq.end());
    char most_frequent_char = '?';

    for (int i = 0; i < 26; i++) {
        if (freq[i] == max_freq) {
            if (most_frequent_char == '?') {
                most_frequent_char = i + 'A';
            } else {
                most_frequent_char = '?';
                break;
            }
        }
    }

    cout << most_frequent_char << endl;

    return 0;
}
