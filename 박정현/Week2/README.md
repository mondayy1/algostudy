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

