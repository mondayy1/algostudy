#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

int main(void) {

    int N, M;
    N = M = 0;

    cin >> N >> M;

    vector<int> arr(N);

    int A, B, C;
    A = B = C = 0;

    for (int i = 0; i < M; i++) {
        cin >> A >> B >> C;
        for (int j = A - 1; j < B; j++) {
            arr[j] = C;
        }
    }

    for (int i = 0; i < N - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << arr[N-1];

    return 0;
}

//https://www.acmicpc.net/problem/10810

/*

입력
첫째 줄에 N (1 ≤ N ≤ 100)과 M (1 ≤ M ≤ 100)이 주어진다.

둘째 줄부터 M개의 줄에 걸쳐서 공을 넣는 방법이 주어진다. 각 방법은 세 정수 i j k로 이루어져 있으며, i번 바구니부터 j번 바구니까지에 k번 번호가 적혀져 있는 공을 넣는다는 뜻이다. 예를 들어, 2 5 6은 2번 바구니부터 5번 바구니까지에 6번 공을 넣는다는 뜻이다. (1 ≤ i ≤ j ≤ N, 1 ≤ k ≤ N)

도현이는 입력으로 주어진 순서대로 공을 넣는다.

출력
1번 바구니부터 N번 바구니에 들어있는 공의 번호를 공백으로 구분해 출력한다. 공이 들어있지 않은 바구니는 0을 출력한다.


에제)
입력 :
5 4
1 2 3
3 4 4
1 4 1
2 2 2

출력 :
1 2 1 1 0

*/