#include <iostream>
#include <string>
#define endl '\n'
using namespace std;

int main(void) {
    string str;
    int N = 0;
    getline(cin, str);
    cin >> N;

    cout << str[N-1];

    return 0;
}

//https://www.acmicpc.net/problem/27866