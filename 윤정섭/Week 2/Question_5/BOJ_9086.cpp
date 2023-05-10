#include <iostream>
#include <string>
#define endl '\n'
using namespace std;

int main(void) {
    int N = 0;
    cin >> N;
    cin.ignore(); // 첫 번째 입력 후에 '\n'을 버림

    const int MAX_SIZE = 10;

    string str[MAX_SIZE];
    string Output_data;
    int cnt = 0;

    for (int i = 0; i < N; i++) {
        getline(cin, str[i]);
    }
    for (int j = 0; j < N; j++) {
        cout << str[j].front() << str[j].back() << endl;
    }
    
    return 0;
}


//https://www.acmicpc.net/problem/9086