# 주제 공부

## RANDOM

`cmath` 라이브러리를 추가하여 사용. 랜덤값은 시드값에 따라 결정되므로 srand()함수를 이용해 설정할 수 있다. 이때 시드값은 항상 바뀌어야 하므로 가장 쉬운 것은 time()을 이용하여 현재 시간을 변수로 준다.

```cpp
#include <cmath>
#include <ctime>

srand(time(0))
```

## 파일 입출력

`fstream` 라이브러리를 추가하여 사용. 파일에서 데이터를 읽어올 때에는 `ifstream` 변수, 데이터를 파일에 쓸 때에는 `oftsream` 변수를 지정하여 사용한다.

```cpp
#include <fstream>

ifstream fin;
ofstream fout;
char c;

fin.open('<file_path>');
fout.open('<file_path>');

//한 글자별 컨트롤
fout.put('<char>');
fin.get(c);

//단어별 컨트롤
fout << <somethings>;
fin >> <some_values>;

//라인별 컨트롤
fin.getline(chararr, sizeof(chararr));
```

# 문제풀이

## 입출력과 사칙연산
### 2557: Hello World
cout에 대한 기본 문제
### 1000 : A+B
cin과 cout에 대한 기본 문제
### 1001 : A-B
A-B를 출력하는 문제
### 10998 : AxB
A*B를 출력하는 문제
### 1008 : A/B
A/B를 출력하는 문제   

정확도가 $ 10^{-9} $정도는 되어야 하므로 소수점 길이를 조절해야 한다.   
cout을 사용한다면 출력하기 이전에 `std::cout.precision(<int>)` 메소드를 수행하여 소수점 길이를 조절해 주면 된다. 
## 조건문
### 1330 : 두 수 비교하기
if, else-if, else 처리
### 9498 : 시험 성적
else-if문이 다중으로 있을 때 처리
### 2753 : 윤년
4의 배수이면서 100의 배수가 아닐때, 혹은 400의 배수일 때 윤년이다.   
C에서 조건문으로 나타내면    
1. (year % 4 == 0) && (year % 100 != 0)
2. (year % 400 == 0)
두 조건을 `or` 한 결과를 출력
### 14681 : 사분면 고르기
(+, +): 1사분면   
(-, +): 2사분면   
(-, -): 3사분면   
(+, -): 4사분면   
### 2884 : 알람 시계
입력받은 시간보다 -45분한 시간을 출력하는 문제    
만약 시간(h)이 0일 때 분(m)이 45보다 작다면 시간을 23으로 바꾸고 적당히 조절한 분을 출력한다.    
## 반복문