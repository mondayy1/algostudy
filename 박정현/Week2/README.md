# 주제 공부

## std::vector
### 선언
```C++
vector<int> v;

vector<int>v(4); //0으로 초기화 된 크기 4의 벡터

vetor<int> v = {1,2,3}; //벡터 생성 후 초기화

vector<int> v[] = {{1, 2}, {3, 4}}; //행은 가변이지만 열은 고정 Nx2 크기의 벡터

vector<vector<int> > v; //2차원 벡터

vector<int> v= {1, 2, 3, 4, 5};
v.assign(5, 10); //벡터의 범위 내에서 해당 값으로 초기화

```

### 순회(iterator)
```C++
v.begin() //벡터의 첫 부분
v.end() //벡터의 끝(값 없음!! NULL과도 같은 것)

v.rbegin() //벡터의 마지막 원소
v.rend() //벡터의 처음(값 없음!! NULL과도 같은 것)
```

### 요소 접근
```C++
v.at(i) //범위 검사(error 발생)
v[i]
v.front();
v.back();
```
front와 begin, back과 end는 반환되는 형식이 다르다!!!!

### 요소 삽입
```C++
v.push_back(element)
v.pop_back()

v.insert(int, element)
v.emplace(int, element)
//insert는 벡터를 복사하는 오버헤드가 필요하다.

v.erase(int)
v.clear()
//clear는 모든 요소를 지운다

v.resize(int)
```

### 벡터 용량
```C++
v.empty() //비어있으면 true

v.size()
v.capacity()
//capacity는 최대 수용량 size는 원소가 삽입되어 있는 크기

v.max_size()
//system내에서의 최대 크기
v.reserve(int)
// 벡터의 크기 설정

v.shrink_to_fit()
//capacity크기 조정
```

## std::string
C언어의 문자열과는 다르게 끝에 널문자(\0)가 삽입되지 않는다.

### 생성
```C++
string str; //빈 문자열 생성

string str = "abcdef";
string str("abcdef");
string str2(str1);
//초기화된 문자열 생성

char s[] = {'a','b','c','d'};
string str(s);
//C 문자열과 호환 가능
```

### 연산자 활용
```C++
string str1;
string str2;

str1 < str2;
str1 > str2;
str1 == str2;

str1 + str2; //concatenation
```

### 멤버 함수
```C++
str.at(index)
str[index]

str.front()
str.back()
//처음과 마지막 원소

str.size()
str.capacity()
//크기 관련

str.resize(n, char);
//n개만큼 크게 하고 char로 채운다.

str.empty();

str.append(str2); //str+str2와 같은 연산
str.append(str2, n, m); //n 위치부터 m개의 문자를 이어 붙인다.
str.append(n, 'a'); //n개의 'a'를 이어붙인다.
str.insert(n, string); // n위치에 string을 삽입한다.
str.replace(n, k, string) //n위치에서 k길이만큼 대체한다.
str.clear();

str.erase(n, m); //n의 위치부터 m개만큼 삭제한다.
```

### 기타 멤버 함수
```C++
str.find("abcd"); //해당 문자열이 포함되면 첫 번째 인덱스를 반환
str.find("abcd", n); //n번째 인덱스부터 문자열 찾기
str.substr(n, k); //n의 위치에서 k만큼 부분 문자열

//아래에서부터는 함수
isdigit(c) //c가 숫자인가?
isalpha(c) //c가 영어인가?
toupper(c) //대문자 변환
tolower(c) //소문자 변환
```

# 문제 풀이

## Topic 1
### 2438: 별 찍기 - 1
for문으로 1씩 증가시키면서 별을 찍으면 되는 문제

### 2439: 별 찍기 - 2
for문으로 1씩 증가시키면서 빈칸과 별을 찍으면 되는 문제

### 2440: 별 찍기 - 3
for문으로 1씩 감소시키면서 별을 찍으면 되는 문제

## Topic 2

### 10807: 개수 세기
N개의 정수가 주어질 때 정수 v가 몇 개인지 구하는 프로그램   
1. 정수의 범위가 -100 ~ 100 이므로 넉넉하게 250 정도 크기의 vector를 선언한다.   
2. 입력 받은 값에 100을 더한 값을 벡터의 index로 해당 위치의 값을 1씩 증가시킨다.
3. 입력 받은 v에 100을 더한 위치의 값을 출력한다.

### 10871: X보다 작은 수
N개의 정수가 주어질 때 X보다 작은 수를 모두 출력하는 프로그램   
1. X보다 작은 값을 저장할 vector를 선언한다.
1. N개의 정수를 입력받는다.
3. 입력받은 값이 X보다 작으면 vector에 추가한다.
4. vector의 원소들을 출력한다.

### 10818: 최소, 최대
N개의 정수에서 최대, 최솟값을 구하는 프로그램   
사실 이 문제는 배열을 사용하지 않아도 되는 문제이긴 하지만 벡터를 최대한 사용해보라고 하였으므로 두 가지 버전을 제시한다.   
1. 배열에 N개의 값을 저장한다.
2. 최대값을 가장 작은 수, 최솟값을 가장 큰 수로 초기화한다.
3. 배열의 각 원소들을 확인하면서 최대값과 최솟값을 최신화한다.
4. 최솟값과 최댓값을 출력한다.

배열을 사용하지 않으려면 값을 입력받을 때 배열에 저장하지 않고 최솟값과 최댓값만 비교해보면 된다.

### 2562: 최댓값
9개의 서로 다른 자연수가 주어질 때 최댓값을 찾고 그 인덱스를 출력하는 프로그램   
위의 최대, 최솟값과 같은 방식으로 풀면되는데, 이때 인덱스를 저장하는 것만 추가하면 된다.

### 10810: 공 넣기
1번부터 N번까지 번호가 지정된 바구니에 1번부터 N번까지 공을 넣을 때 바구니에 마지막에 남는 공의 번호를 출력하는 프로그램   
1. 크기 N의 vector를 만들고 0으로 초기화
2. 한 줄을 입력받을 때마다 x~y까지를 해당 번호로 초기화
3. M번 입력이 끝나면 vector출력