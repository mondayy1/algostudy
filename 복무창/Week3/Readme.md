### 입출력버퍼 동기화 해제  
```C++
ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
```
ios_base::sync_with_stdio(false) : C의 stdio와 C++의 iostream의 동기화를 비활성화  
원래 C, C++의 표준 스트림은 동기화되어있다. 즉, 동일한 버퍼를 공유한다.  
결국 iostream, stdio의 버퍼를 모두 사용하기 때문에 딜레이가 발생하여 성능저하가 발생
그러므로 C++, C의 각각의 입출력을 같이 사용하면 안된다. ex) cout, printf 같이 사용하면 안됨  

cin.tie(0); cout.tie(0);
원래 cout, cin 입출력은 묶여있다.  
입출력이 반복될 때 버퍼를 비우느라 시간이 오래 걸린다. 따라서 입출력 묶음을 풀면 시간이 단축된다.  

### Associative(연관)컨테이너인 set, map  
연관 컨테이너는 key와 value를 통해 관계있는 값을 묶어서 저장하는 컨테이너  
key와 value를 통해 요소에 빠른 접근이 가능하지만 연관 컨테이너는   
자체적인 기준을 가지고 요소를 정렬하기 때문에 삽입되는 요소의 위치를 지정할 수 없다.  

#### map  
- 레드-블랙 트리로 구현되어 있어 균형 이진 트리다.  
- 삽입, 삭제, 탐색 시간 복잡도가 log(n)의 시간 복잡도를 갖는다.  
- 삽입시 데이터가 자동으로 정렬
- 중복 키 값을 허용하지 않는다.

```C++
//기본적인 생성방법
std::map<int, int> mp;
 
//복사 생성자가 존재한다.
std::map<int, int> mp2(mp);

// [] 연산자를 이용해 새 요소 삽입
mp[3] = 10;
```
![image](https://github.com/mondayy1/algostudy/assets/85085804/6fe4af41-d20f-48ff-9a61-7beec5c36883)

#### set
- map과 거의 동일하지만 다른 점은 key가 value 그 자체다.
- operator[] 연산자를 지원하지 않는다.  
```C++
//기본적인 생성방법
std::set<int> st;
//복사생성자 지원
std::set<int> st2(st);
```

![image](https://github.com/mondayy1/algostudy/assets/85085804/81fd29a8-4cf5-4c69-b1b2-d28392607f1e)

#### define함수(매크로)  
- 단순히 치환하기만 해서 실제로 함수는 아니다.  
- 매크로 함수 내붕서 자기 자신을 호출할 수 없다.

사용법
```C++
#define (매크로 함수 이름) (매크로 함수 기능)
#define ADD(a,b) a+b
```

주의점
- 괄호를 제대로 사용하지 않는다면 결과가 이상해질 수 있다. ex) 곱셈
```C++
#include <stdio.h>

#define MUL1(x,y) x*y
#define MUL2(x,y) (x)*(y)

int main()
{
    int num1 = 5;
    int num2 = 4;

    printf("매크로 함수(MUL1) : %d * %d = %d\n", num1 + 1, num2 + 1, MUL1(num1 + 1, num2 + 1));  // num1 + 1 * num2 + 1로 변환
    printf("매크로 함수(MUL2) : %d * %d = %d\n", num1 + 1, num2 + 1, MUL2(num1 + 1, num2 + 1));  // (num1 + 1) * (num2 + 1)로 변환

    return 0;
}
```

![image](https://github.com/mondayy1/algostudy/assets/85085804/152e96ef-0120-46eb-874a-507f011c5a18)

\#연산자  
```
#define ADD2(x,y) #x "+" #y  //문자열로 바꿔주는 연산자 #
```

\##연산자  
```C++
#include <stdio.h>

#define CONCAT(x,y,z) x ## y ## z

int main()
{
    printf("매크로 함수(CONCAT) : %d\n", CONCAT(10, 20, 30));
    
    return 0;
}
```
![image](https://github.com/mondayy1/algostudy/assets/85085804/7589a30d-524f-46bd-aa43-a23d97ebd41e)

매크로 함수와 인라인 함수의 공통점과 차이점  
- inline 함수의 경우
  - 컴파일 단계에서 이루어짐
  - 타입 검사

- macro 확장자의 경우
  - 전처리 단계에서 이루어짐
  - 타입 검사 X

---

### BOJ 2720 세탁소 사장 동혁  
입력받은 값들을 쉽게 관리하기 위해 vector 사용  
쿼터: 0.25 -> 25, 다임: 0.10 -> 10, 니켈: 0.05 -> 5, 페니: 0.01 -> 1 달러를 센트로 변환한다.  
쿼터부터 나누어보고 나누어지면 나누고 그다음에 다임 ... 순서대로 나눠서 0이 될때까지 계속 나누면서 출력하면 된다.  

### BOJ 3003 킹, 퀸, 룩, 비숍, 나이트, 폰  
원래 있어야 할 체스 말의 개수는 정해져 있기 때문에 배열을 이용  
1, 1, 2, 2, 2, 8 에서 입력 받은 수를 차례로 빼고 출력하면 된다.  

### BOJ 5086 배수와 약수
0 0 입력받을 때까지 입력받아야 하니까 vector 이용  
pair<int,int> 이용한다.  
vector에서 꺼내면서  
첫 번째 수가 두 번째 수의 약수면 factor, 배수라면 multiple을, 둘 다 아니라면 neither를 출력  

### BOJ 10988 팰린드롬인지 확인하기  
입력받은 원본을 따로 저장하고 원본을 reverse를 이용해 뒤집고 일치하면 1, 불일치하면 0 출력

### BOJ 1157 단어공부  
입력받은 문자열에서 소문자를 toupper()를 이용해 대문자로 변환한다.  
크기가 26인 int 배열을 0으로 초기화한다.
입력받은 문자열의 문자 하나 하나의 아스키 코드 값을 구하고 65를 빼서 해당하는 배열의 인덱스의 값들을 증가시킨다.  
그 중에서 가장 큰 수의 인덱스 번호를 max_element()를 이용해 구한다.  
count를 이용해 가장 큰 수가 또 있는 지 검사하고 있으면 '?'출력, 아니면 가장 큰 수가 있는 인덱스 + 65한 값을 (char)로 변환해 출력  
