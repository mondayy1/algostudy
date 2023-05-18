**BOJ_11650 좌표정렬**
    1. vector<pair<int,int>>v;
    vector에서 x,y형태로 변수를 받고자할 때 쌍으로 받기 때문에 이와 같은 문제에서 유용하다 각각따로 x,y를 받게되면 정렬을 두번해야하기에 복잡해질 수 있는데 이를 이용하면 같이 정렬에 적용될 수 있어 편하다.
    2. endl과 "\n"
    이 문제는 endl과 \n의 차이를 확연히알 수 있는 문제인데. 이둘은 

**BOJ_10988 팰린드롬인지 확인하기**
    1.앞뒤를 확인하면서 앞은+1 뒤는 T-1를 해줘서 절반까지 갈 때까지 반복해주고 만약 2개이상일 경우 0출력시

**BOJ_1157 단어 공부**
    1.map라이브러리 생성후 
    
	map<char, int>m;
    만들어서 각 알파벳마다의 갯수를 넣을 수 있게 만듦
    2. tolower()로 소문자 통일시키고, toupper()를 이용해서 정답값을 출력함.


**BOJ_2720 세탁소 사장 동혁**
    1.한 배열에 25,10,5,1를 저장해 큰 수부터나눌 수 있게 만듦
    2. 나누고 나서 남은 값을 다시 저장하면서 갯수 파

**BOJ_3003 킹,퀸,룩,비숍,나이트,**
    1. 처음 각 기물들의 갯수를 배열에 저장
    2. 입력받은 값을 빼서 적거나 더 많은 것 배열에 저장해 출력

**BOJ_5086 배수와 약수**
    1. a,b를 입력받은 뒤에 a가 b보다 작거나 같다면 약수일 수 밖에없기 때문에 factor의 조건을 보고 v vector에 넣음
    2. a가 b보다 크면 배수인지 조건확인 후 multiple
    3. 둘 다 해당 안될시 neither

```3주차 개념 정리```

# 입출력버퍼 동기화 해제

1.ios_base::sync_with_stdio(false)

`ios_base::sync_with_stdio(false)` : C의 stdio와 C++의 iostream의 동기화를 **비활성화** 한다 (즉, 평소엔 서로 동기화 상태)

C++에서 C와 C++각각의 스타일로 입출력 받아도 서로 동기화해 우리가 입력/출력하고자 하는 순서대로 결과 얻을 수 있었음.(C와 C++ 동일한 버퍼 공유)

→ iostream과 stdio의 버퍼를 모두 사용하여 딜레이(성능저하)발생 대신 혼용해 쓸 경우 합리적이고, 스레드로부터 안전하다.

`ios_base::sync_with_stdio(false)`  C++ 표준 스트림이 독립적으로 IO 버퍼링을 하게 되어 많은 양의 입출력이 있을 경우 성능이 많이 좋아진다.

- 동기화가 비활성화 시켰을 경우 C의 scanf, gets,getchar,printf,puts,putchar를 같이 사용할 수 없다.

1. cin.tie(NULL)

`cin.tie(NULL)` : 입력과 출력 연결을 끊어준다 (`cin.tie(nullptr)` 또는 `cin.tie(0)` 도 가능)

cout과 cin은 입출력이 묶여있는데, 입력요청이 들어오면 그 전에 출력 작업이 있었을 경우(출력버퍼에 내용이 있는 경우) 버퍼를 비우고 출력한다.

→ 반복될때마다 일일이 버퍼를 지우기 때문에 시간이 걸림

cin.tie(NULL)로 시간단축

- 주의사항: 입출력 순서 보장X        입력→출력순으로 코드 작성해도 순서가 없어서 입력이 모두 진행된 후에 출력됨(실험해봤는데 그렇지 않았음)→컴파일러에 따라 다르다.

1. endl

 개행 뿐만 아니라 출력 버퍼를 비우는 역할을 한다.

- 출력버퍼를 지우는 작업은 마지막에 한번에 비우는 것이 좋음(버퍼가 꽉차면 알아서 비움)

+) endl은 출력 버퍼를 비우기 때문에 위에서 다룬 cin.tie(NULL)의 역할인 묶음을 끊어주는 효과를 볼 수 없게 함.


# Associative(연관)컨테이너인 Set, Map

1. Map

인덱스로 int가 아닌 다른 자료형을 사용할 수 있는 배열

→ key와 value의 쌍으로 이루어진 트리 (key기준으로 정렬하여 검색속도가 빠르다)

키(Key)를 이용해 객체를 꺼내온다. (비선형 자료구조)

용도: 연관 있는 두 값을 함께 묶어서 관리하되 검색을 빠르게 하고 싶을 때,

#include<map>

map은 중복 불가한 key와 value쌍으로 이루어진 노드의 트리라고할 수 있다.

같은 key값을 갖는 노드 추가하면 원래 노드의 value값에 덮어씌워짐

map은 요소에 접근할 때 반복자(iterator)를 이용하는 방식과 인덱스(key)를 이용하는 방식으로 이용한다.

→m은 map을 뜻함

| 멤버 함수 | 기능 |
| --- | --- |
| m.size() | m의 노드 개수를 리턴 |
| m.empty() | m의 사이즈가 0인지 아닌지를 확인 |
| m.begin() | m의 첫 번째 원소를 가리키는 iterator 리턴 |
| m.end() | m의 마지막 원소를 가리키는 iterator 리턴 |
| m[k] = v | m에 key가 k이고, value가 v인 노드 추가 |
| m.insert(make_pair(k,v)) | m에 key가 k이고, value가 v인 노드 추가 |
| m.erase(k) | m에서 key가 k인 노드 삭제 |
| m.find(k) | m에서 key가 k인 노드를 찾아, 해당 노드를 가리키는 iterator 리턴
 (key가 k인 노드가 존재하지 않는 경우, m의 마지막 원소를 가리키는 iterator 리턴) |
| m.count(k) | m에서 key가 k인 노드의 개수를 리턴 |

ex)

```cpp
#include<iostream>
#include<map>
using namespace std;
map<char, int> m;
map<char, int>::iterator it;

int main() {
m['B'] = 2;                        //m : (B,2)
m.insert(make_pair('A', 1));        //m : (A,1) (B,2)
m['C'] = 3;                        
//m : (A,1) (B,2) (C,3)//key값 기준으로 정렬

m.erase(m.begin());                      //m : (B,2) (C,3)

//m전체를 순회하며 key와 value 출력
for (it = m.begin(); it != m.end(); it++)
	cout << it->first << ' ' << it->second << '\\n';
//it->first(key) , it->second(value)

if (m.find('B') != m.end())
	cout << "key값이 B인 노드가 존재합니다." << '\\n';
else
	cout << "key값이 B인 노드가 존재하지 않습니다." << '\\n';
return 0;
}
```

1. set

key만 있는 map 혹은 정렬된 집합

중복된 값을 허락하지 않고 key값을 기준 정렬

용도

특정 값에 대해 검색 빠르게 하려고

사용법

set→ s으로 적용

| 멤버 함수 | 기능 |
| --- | --- |
| s.size() | s의 노드 개수를 리턴 |
| s.empty() | s의 사이즈가 0인지 아닌지를 확인 |
| s.begin() | s의 첫 번째 원소를 가리키는 iterator 리턴 |
| s.end() | s의 마지막 원소를 가리키는 iterator 리턴 |
| s.insert(k) | s에 값이 k인 노드 추가 |
| s.erase(k) | s에서 값이 k인 노드 삭제 |
| s.find(k) | s에서 값이 k인 노드를 찾아, 해당 노드를 가리키는 iterator 리턴
 (값이 k인 노드가 존재하지 않는 경우, s의 마지막 원소를 가리키는 iterator 리턴) |
| s.count(k) | s에서 값이 k인 노드의 개수를 리턴 |

ex)

```cpp
#include<iostream>
#include<set>
#include<vector>
using namespace std;
set<int> s;
set<int>::iterator it;

int main() {
s.insert(4);               //s : 4
s.insert(1);               //s : 1 4
s.insert(2);               //s : 1 2 4

vector<int> v;
v.push_back(3);            //v : 3
v.push_back(5);            //v : 3 5
v.push_back(6);            //v : 3 5 6
s.insert(v.begin(), v.end());        //s : 1 2 3 4 5 6

s.erase(s.find(3));                //s : 해당 3이 있는 장소를 찾아서 있으면 해당index를 지움
s.erase(s.begin());        //s : 2 3 5 6

//지울 원소를 입력받음
int toErase;
cin>> toErase;

it = s.find(toErase);

//지울 원소가 존재하는 원소일 때만 지움
if (it != s.end())
    s.erase(it);

for (int i : s) {
    cout << i<<" ";
}

```

}

# define함수(매크로)

매크로함수: 함수처럼 인자를 설정할 수 있는 매크로

매크로 상수→#define MAX 10

매크로 함수→#define ADD(a,b) a+b

단순히 치환하기만 하고 함수와 다르게 인자의 자료형을 신경쓰지 않는다. 

- 매크로 함수 내부에선 자기 자신 호출x

ADD(n,m);형태로 쓰면됨(함수형태와 동일)

- 주의할 점

만약add(num1+1,num2+2)형태일 때 괄호를 제대로 사용하지 않으면 값이 달라질 수 있음

매크로 #연산자

매크로 함수의 인자를 문자열로 바꾸어 줄 수 있음

#define ADD2(X,Y) #X “+” # Y

X와Y로 들어가는 변수가 X+Y형태의 문자열로바뀜

매크로##연산자

##로 이어붙일 수 있음.

X ## Y ## Z→ XYZ

매크로 함수와 인라인 함수 공통점과 차이점

inline함수

- 컴파일 단계에서 처리가 이루어진다.
- 일반적인 함수들을 실행하는 타입검사가 그대로 적용된다.

macro확장자

- 전처리 단계에서 치환이 이루어진다.
- 대치 시 어떠한 타입 검사도 이루어지지 않는다.