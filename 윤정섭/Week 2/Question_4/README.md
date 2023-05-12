# BOJ_2562
```c++
#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'


int main(void) {
    int N = 9;
    int max_num = 0;

    vector<int> arr(N);

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int j = 0; j < N; j++) {
        if (arr[max_num] < arr[j]) {
            max_num = j;
        }
    }

    cout << arr[max_num] << endl << max_num + 1;

    return 0;
}
```

최대값

첫째 줄에 최댓값을 출력하고, 둘째 줄에 최댓값이 몇 번째 수인지를 출력한다.

vector을 사용하여 최대값을 출력하는 Code.
  if (arr[max_num] < arr[j]) 
만약 arr[현재 최대값 index] 보다 arr[비교 index]가 클 경우
        max_num = j;
max_num에 j 값을 넣는다. 비교가 끝나면

   cout << arr[max_num] << endl << max_num + 1;
출력한다. max_num + 1으로 문제에서 원하는 위치값을 출력이 가능하다.


# BOJ_10807
```c++
#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

int main(void) {
	int N = 0;

	cin >> N;
	vector<int> arr(N);

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int Search_data = 0;
	int cnt = 0;

	cin >> Search_data;
	for (int j = 0; j < N; j++) {
		if (Search_data == arr[j]) cnt++;
	}

	cout << cnt;

	return 0;
}
```


개수 세기

첫째 줄에 입력으로 주어진 N개의 정수 중에 v가 몇 개인지 출력한다.


	cin >> N;
	vector<int> arr(N);
N개 만듬 vector 요소를 생성 0으로 초기화

값을 arr()에 넣고, cin >> Search_data; 찾고자 하는 값을 입력
	for (int j = 0; j < N; j++) {
		if (Search_data == arr[j]) cnt++;
	}
찾고자하는 값과 arr[j] 값이 같을 경우 cnt++, 계산이 끝나면
cout << cnt;


# BOJ_10810
```c++

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

```

공 넣기

에제)
입력 :
5 4
1 2 3
3 4 4
1 4 1
2 2 2

출력 :
1 2 1 1 0


N개의 바구니에 M번 값을 넣는다.
A번 B번까지 C 숫자 공을 넣는다.

 - 핵심 코드
```c
    for (int i = 0; i < M; i++) {
        cin >> A >> B >> C;
        for (int j = A - 1; j < B; j++) {
            arr[j] = C;
        }
    }

```


# BOJ_10818
```c++

#include <iostream>
using namespace std;
#define endl '\n'
#define MIN_SIZE -2147483648
#define MAX_SIZE 2147483647

int main(void) {
    int N = 0;
    cin >> N;

    int input_data = 0;
    int min_data = MAX_SIZE;
    int max_data = MIN_SIZE;

    for (int i = 0; i < N; i++) {
        cin >> input_data;
        if (min_data > input_data) min_data = input_data;
        if (max_data < input_data) max_data = input_data;
    }
    cout << min_data << " " << max_data;

    return 0;
}

```

최소, 최대

N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.


N개의 정수의 입력값 input_data를 계산한다.

    for (int i = 0; i < N; i++) {
        cin >> input_data;
        if (min_data > input_data) min_data = input_data;
        if (max_data < input_data) max_data = input_data;
    }

min_data보다 input_data가 작다면 min_data = input_data;
max_data보다 input_data가 크다면 max_data = input_data;

계산이 끝난다면 값을 출력한다.

#define MIN_SIZE -2147483648
#define MAX_SIZE 2147483647

MIN_SIZE, MAX_SIZE를 정의했는데, 이 값은 int가 표현할 수 있는 최댓값과 최솟값이다.


# BOJ_10871
```c++

#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

int main(void) {
	int N, min;
	N = min = 0;
	cin >> N >> min;
	vector<int> arr(N);


	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	bool first_check = true;

	for (int j = 0; j < N; j++) {
		if (min > arr[j]) {
			if (first_check == false) cout << " ";
			else first_check = false;
			cout << arr[j];
		}
	}

	return 0;
}

```

X보다 작은 수

정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.
