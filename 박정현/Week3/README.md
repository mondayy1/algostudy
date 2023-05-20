# 주제 공부

## 입출력버퍼 동기화 해제
### ios_base::sync_with_stdio(false)

C의 stdio와 C++의 iostream 사이에는 서로 동기화가 되어있지만(기본적으로 true) 이를 해제한다.   
알고리즘 문제에서는 멀티스레드나 예외 처리 작업이 필요하지 않기 때문에 동기화를 끊고 성능을 높인다.   
이 경우에는 버퍼가 분리되었기 때문에 scanf, gets, getchar 등의 입력 함수와 printf, puts, putchar 등의 출력 함수를 cin, cout과 같이 사용하면 안된다.

### cin.tie(NULL)
cout과 cin 사이에 입출력은 서로 묶여있다. 그래서 출력 후 입력을 하려고 하면 버퍼를 비우고 입력값을 버퍼에 저장한다.   
위와 마찬가지로 버퍼를 비우는데 걸리는 시간을 줄이기 위해서 묶인 것을 풀어준다.

### endl 대신 '\n'
endl은 개행 뿐만 아니라 버퍼를 비우는 역할도 수행한다. 따라서 일반 '\n'보다 많은 시간을 할애하게 된다. 그래서 개행을 표현하고 싶을 때에는 '\n'을 이용해 버퍼를 비우는 시간을 단축할 수 있다.

## map
### 정의
키-값의 노드가 레드블랙 트리 형태로 저장되어 있는 자로형

### 용도
연관 있는 두 값을 함께 묶어서 관리하되, 검색을 빠르게 하는 용도

### 사용법
```C++
#include <map>

std::map<void*, void*> m; //앞 원소는 key type, 뒤 원소는 value type을 나타낸다.

m.size();
m.empty();
m.begin();
m.end();

m[k] = v;
m.inert(make_pair(k,b));

m.erase(k);
m.find(k);
m.count(k);
```

## set
### 정의
중복을 허락하지 않는 원소들의 집합

### 용도
특정 값을 빠르게 검색하기 위한 용도

### 사용법
```C++
#include <set>
std::set <void*> s;

s.size();
s.empty();
s.begin();
s.end();

s.insert(k);
s.erase(k);
s.find(k);
```

## 정렬 기준
### 사용자 데이터 타입
class나 struct 안에 `<` 연산자를 오버로딩 해주면 된다.

```C++
class Something
{
    ...
    public:
    bool operator<(const Something& other) const{
        return (some conditions);
    }
}
```

### 다른 기준
비교를 위한 함수를 새롭게 만든다. 
```C++
bool compare(const SomeType &a, const SomeType &b)
{
    return (some conditions);
}
```

## 매크로 함수
의미를 명확하게 표현하거나 긴 문장을 간략하게 줄이고 싶을 때 매크로를 사용하기도 한다.
```C++
#define MacroName MacroFunc
```

### #연산자
매크로 함수 내부에서 #연산자를 사용할 경우에는 문자열로 만들어 준다.

```C++
#define some(x, y) #x "+" #y

printf("%s", some("1", "2"));
// 1+2
```

### ##연산자
토큰 결합 연산자로 매크로 함수의 인자들을 이어붙일 수 있다.

```C++
#define some(x, y) ##x ##y

printf("%s", some("1", "2"));
//12
```

### 주의점
macro 확장자의 경우 단순 치환만 이루어지기 때문에 컴파일러에서 제공하는 오류 체크 기능이 아무것도 이루어지지 않는다.

# 문제 풀이

## 수학

### 2720: 세탁소 사장 동혁
쿼터($0.25) /
다임 ($ 0.1) /
니켈 ($ 0.05) /
페니 ($ 0.01)

최소 개수를 찾는 문제이고 동전 개수의 제한이 없으므로 그리디 해법이 적용 가능하다.

가장 큰 수부터 나누면서 답을 찾으면 되는 문제

