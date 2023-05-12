# BOJ_2743
```c++

#include <iostream>
#include <string>
#define endl '\n'
using namespace std;

int main(void){
    string str;
    getline(cin, str);
    cout << str.length();
    
    return 0;
}
```
단어 길이 재기

문자열의 길이를 출력하는 문제입니다.

string class를 활용하여 문제를 작성.
getline(cin, str); 으로 문자열을 입력한다. str string 값으로.
str.length()는 str의 길이를 출력해주는 명령어이다.

위 명령어 외 방법으로 str.size()와

```c++
int len = 0;
    for (char c : str) {
        ++len;
    }
```

위 방법은 문자열의 str 문자열의 첫 번째 문자부터 마지막 문자까지 반복하게 만듭니다. 이것으로 길이를 구할 수 있습니다.


# BOJ_2743
```c++

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

```

문자열

해당 문제는 문자열의 첫 문자와 끝 문자를 출력하는 문제입니다.
따라서 str.front(), str.back()을 이용하여 값을 출력할 수 있습니다. 이때 front()는 맨 앞, back()은 맨 뒤의 값을 출력합니다.

문제 2743과 다른점은 str에 []를 붙여 사용했다는 점입니다.
str[]의 의미는 C언어에서 str[][]과 같습니다. 즉 2차 배열을 의미합니다. 

(문제점 해결) 추가한 source code
```c++
cin.ignore(); // 첫 번째 입력 후에 '\n'을 버림
```
위 문제가 발생된 이유는 cin을 사용한 후 getline을 사용하였을 경우 발생하는 문제로 확인됩니다. cin.ignore();을 사용하여 cin 입력 후 버퍼에 남아있는 '\n'을 버리는 것으로 문제를 해결했습니다.



# BOJ_27866
```c++

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

```

문자와 문자열

문자열을 입력한 후 N번째의 문자를 출력하는 문제입니다.

특이점으로는 str[N-1]을 했습니다. 이유로는 주어진 정수는 1<= N <= s으로 s는 1부터 최대 크기까지 입력합니다. 하지만 index는 0부터 시작하므로 -1을 붙이는 것으로 원하는 값을 출력할 수 있습니다.