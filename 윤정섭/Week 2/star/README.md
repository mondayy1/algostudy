# BOJ_2438
```c++
#include <iostream>
using namespace std;
#define endl '\n'

int main(void){
    int N = 0;
    cin >> N;

    for(int i = 1; i <= N; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
```

별 찍기 - 1

출력 :
*
**
***
****
*****


2중 for문으로 '*' 출력을 1개부터 N개까지 출력한다.


# BOJ_2439
```c++
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
```

별 찍기 - 2

출력 :
    *
   **
  ***
 ****
*****


1부터 N까지가 아닌 N부터 1까지 즉 역순으로 반복하게 실행. 역순으로 반복하게 만든 이유는 오른쪽에서 '*' 출력을 하기 위해서

count는 출력할 '*'의 갯수를 의미함. (반성 : 변수 명을 명확하게 작성해야함.)


# BOJ_2440
```c++
#include <iostream>
using namespace std;
#define endl '\n'

int main(void) {

	int num = 0;
	cin >> num;

	for (int i = num; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
```

별 찍기 - 3

출력 :
*****
****
***
**
*


N부터 1까지 출력하도록 2중 for문을 이용하여 작성.