#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;

    int left = 0, right = word.length() - 1;
    bool is_palindrome = true;

    while (left < right) {
        if (word[left++] != word[right--]) {
            is_palindrome = false;
            break;
        }
    }

    cout << (is_palindrome ? 1 : 0) << endl;

    return 0;
}
