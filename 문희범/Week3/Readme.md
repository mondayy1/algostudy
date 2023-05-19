# 개념 정리

## In/Out Time Reduction

### ios_base::sync_with_stdio(false)
C의 라이브러리 stdio와 C++의 라이브러리 iostream의 동기화를 비활성화하여 C와 C++이 동일한 버퍼를 공유하여 발생하는 딜레이의 발생을 제거하여 성능을 향상시킬 수 있다.<br>
※ 동기화가 비활성화 된 경우, 버퍼가 분리된 상태이기에 C에서 사용하는 scanf, gets, printf, puts 등과 같은 함수를 사용해서는 안 된다.

### cin.tie(NULL)
본래 하나로 묶여있던 cout과 cin의 입출력 연결을 끊어주어 버퍼를 지우기 위해 발생하는 시간을 단축할 수 있다.<br>
※ 입출력이 묶여있지 않을 경우, 입출력 순서를 보장받을 수 없다.

### '\n' instead endl
endl은 개행 뿐만 아니라 출력 버퍼를 비우는 역할도 하기에 줄바꿈을 할 때 endl이 아닌, '\n'을 사용하면 버퍼를 비우지 않아 시간을 단축할 수 있다.<br>
\* 버퍼는 가득차면 알아서 비워지기에 버퍼를 비우는 작업이 꼭 필요하지 않은 것이다.<br>
※ endl은 출력 버퍼를 비우기에 cin.tie(NULL)을 사용하는 효과를 볼 수 없게한다.

## Map / Set

### Map
index에 int가 아닌 다른 자료형을 사용할 수 있는 배열로 Key-Value 쌍으로 이루어진 트리 구조이다.
```
#include <map>    // map을 사용하기 위해 include

map<{key type}, {value type}> m   // map 선언

m.size()    // map의 노드 개수 반환

m.empty()    // map이 비어있는지의 여부 반환

m.begin()    // map의 첫 번째 원소를 가르키는 인자 반환

m.end()    // map의 마지막 원소를 가르키는 인자 반환

m[k] = v    // key가 k이고 value가 v인 노드 추가

m.erase(k)    // key가 k인 노드 삭제

m.find(k)    // key가 k인 노드의 인자 반환, 없으면 마지막 원소의 인자 반환

m.count(k)    // key가 k인 노드의 개수 리턴
```

### Set
key만 존재하는 map 혹은 정렬된 집합으로 map과 매우 유사한 구조이다.
```
#include <set>    // set을 사용하기 위해 include

set<{key type}> s   // set 선언

s.size()    // set의 노드 개수 반환

s.empty()    // set이 비어있는지의 여부 반환

s.begin()    // set의 첫 번째 원소를 가르키는 인자 반환

s.end()    // set의 마지막 원소를 가르키는 인자 반환

s.insert(k)    // set에 값이 k인 노드 추가

s.erase(k)    // 값이 k인 노드 삭제

s.find(k)    // 값이 k인 노드의 인자 반환, 없으면 마지막 원소의 인자 반환

s.count(k)    // 값이 k인 노드의 개수 리턴
```

## Macro Function
함수처럼 인자를 설정할 수 있는 매크로를 의미하며 단순히 치환 기능을 수행하는 것이기에 실제로 함수는 아니다.

### Basic Structure
```
#define {Macro Function Name}(Parameters) {Function Statement}    // 매크로 정의
```

### Function Operator
```
#define ADD(x, y) x + y    // 두 수의 합

#define MUL1(x, y) x * y    // 두 수의 곱
#define MUL2(x, y) (x) * (y)     // 두 수의 곱
->
MUL1(num1 + 1, num2 + 1) == num + 1 * num2 + 1
MUL2(num1 + 1, num2 + 1) == (num1 + 1) * (num2 + 1)
※ 괄호의 차이는 입력된 인자 처리 방식

#define ADD(x, y) #x "+" #y    // 연산자 #는 주어진 인자를 문자열로 변환
-> ADD(10, 20) == "10+20"

#define CONCAT(x, y, z) x ## y ## z    // 연산자 ##는 주어진 인자를 이어붙임
-> CONCAT(10, 20, 30) == (int)102030
```

# 문제 풀이

### 2720 - 세탁소 사장 동혁
Index가 4인 벡터를 하나 만들고 해당 벡터를 필요한 동전의 개수 카운터로 사용한다. 각각 0번 인덱스는 25 Cent, 1번 인덱스는 10 Cent, 2번 인덱스는 5 Cent, 3번 인덱스는 1 Cent로 설정하여 각 순서대로 입력된 값에서 나눈 몫을 채우고 이후 나머지를 넘겨주는 형식으로 해당 벡터를 채운 뒤 출력한다.

### 3003 - 킹, 퀸, 룩, 비숍, 나이트, 폰
본래 필요한 피스의 개수를 지정한 Origin 벡터를 선언하고 현재 가지고 있는 피스의 개수를 Input 벡터로 입력받아 각 인덱스를 맻칭하여 Input - Origin 연산을 진행 후 결과를 출력한다.

### 5086 - 배수와 약수
두 값을 입력받고 While 반복문을 통해 두 값이 0일 때까지 반복되게 만든다. 값이 입력되면 입력된 두 값을 num1, num2라 할 때 num1 % num2 == 0이면 multiple, num2 % num1 == 0이면 factor, 둘 다 아니면 neither를 출력한다.

### 10988 - 팰린드롬인지 확인하기
String을 입력받고 reverse 함수를 사용해 대조 문자열을 만든 후 입력된 문자열과 대조 문자열의 동일 여부를 출력한다.

### 1157 - 단어 공부
입력받은 String의 각 문자를 대문자로 치환하여 Map의 Key로 넣어주고 값으로는 0을 넣어준다. 이후 입력된 문자열을 다시 순환하면서 각 Key가 몇 개 있는지 세어주면서 가장 많이 나타난 문자를 따로 저장해주며 해당 문자와 나타난 수가 동일하게 나올 때는 가장 많이 나타난 문자를 '?'으로 정한다. 이후 반복이 끝나면 가장 많이 나타난 문자로 지정된 문자를 출력해준다. 