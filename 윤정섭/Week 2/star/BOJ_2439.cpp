#include <iostream>
using namespace std;
#define endl '\n'

int main(void) {
    int N = 0;
    int count = 0;
    cin >> N;

    for (int i = N; i > 0; i--) {
        for (int j = i - 1; j > 0; j--) {
            cout << " ";
            count++;
        }
        while (count < N) {
            cout << "*";
            count++;
        }
        count = 0;
        cout << endl;
    }
    return 0;
}

//제목 : 별 찍기 - 2
//문제 : 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
//https://www.acmicpc.net/problem/2439
