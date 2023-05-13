## Week2  

### vector
C++ STL에 있는 컨테이너로 사자가 사용하기 편하게 정의된 class
vector 생성하면 메모리의 heap 영역에 동적으로 생성된다.
array보다 속도는 느리다.
```c++
vector<int> v;  

vector<int> v(5); // 0으로 초기화된 5개의 요소를 가진 벡터  

vector<int> v = {1,2,3} // 1,2,3을 요소로 가진 벡터
vector<int>v[] = {{1,2}, {3,4}} // int형 벡터 배열 
vector<vector<int>> v // 2차원 벡터

vector<int> v = {1,2,3,4,5};
v.assign(5,10) // 벡터 범위를 5로 지정하고 10으로 초기화
```
![image](https://github.com/mondayy1/algostudy/assets/85085804/ed0e46eb-ec04-4a42-9165-360f6438ad33)  

vector 요소 접근 법
- v.at(i) : i 번째 요소 접근 (범위 검사)
- v.[i] : i 번째 요소 접근 (범위 검사 안함) -> v[i] 말하는 것이다.
- v.front() : 벡터 첫 번재 요소 접근
- v.back() : 벡터 마지막 요소 접근  

vector method
- push_back() : 벡터 마지막 부분에 요소 추가
- pop_back() : 마지막 부분 제거
- insert(삽입할 위치, 값) : 사용자가 원하는 위치에 요소 삽입
- emplace(삽입할 위치, 값) :  사용자가 원하는 위치에 요소 삽입, 복사 생성자 X  
- emplace_back() :  벡터 마지막 부분에 요소 추가, 복사 생성자 X
- erase(삭제 위치) or (시작위치, 끝위치) : [시작위치, 끝위치) 삭제
- clear() : 요소 전부 지운다.
- resize(수정 값) : 벡터 사이즈 조정 (범위 초과시 0으로 초기화)
- swap(벡터 변수) : 벡터와 벡터 swap  

![image](https://github.com/mondayy1/algostudy/assets/85085804/bdcf92cd-ba96-46e3-b737-ee1e180a3274)
size()는 벡터가 생성된 크기, capacity()는 벡터의 최대 할당 크기  
capacity()를 초과하면 재할당이 발생한다.  

### string
C++ STL에서 제공하는 클래스  
char*, char[] 와 다르게 문자열의 끝에 '\0'가 들어가지 않는다. 길이를 동적으로 변경 가능  
```C++
string s;
cin >> s; // 공백 이전까지의 문자열을 입력받는다. 버퍼 비워줘야 됨
getline(cin,s) // '\n' 이전까지의 문자열 이력
getline(cin, s, 'a') // 'a' 문자 이전까지의 문자열 입력받는다.
```

생성법  
```
string s;
string s ="abc";
string s("abc");

char s[] = {'a','b'};
string str(s);

string *str = new string("abc")
```  

<,>,==,+ 등과 같은 연산자 사용 가능  

string method  
- at(i) : i 위치의 문자 반환 (범위 체크)
- [i] : i 위치의 문자 반환 (범위 체크 X)
- front() : 문자열 맨 앞 문자 반환
- back() : 문자열 맨 뒤 문자 반환
- ![image](https://github.com/mondayy1/algostudy/assets/85085804/8804ab4d-7d76-4648-9d58-92e4cab72b16)
- ![image](https://github.com/mondayy1/algostudy/assets/85085804/a93e314a-3845-4fab-945f-a75ced863cd5)

### BOJ 10807
vector에 입력값들을 집어넣고 count()를 이용해 개수를 센다.  
count(시작 위치, 끝 위치(포함 안 됨), 찾고자 하는 값)  

### BOJ 10871  
수열을 입력받을 때 X보다 작으면 vector에 집어넣는다.  

### BOJ 10818  
vector에 담는다.
min_element(), max_element()를 이용해 최소, 최대를 구한다.

### BOJ 2562  
vector에 담는다.  
max_element를 이용해 최대값의 메모리 주소를 구한다.  
포인터를 이용해 그 값을 출력한다.  
메모리주소에서 v.begin()을 뺀 후에 + 1을 하고 몇 번 인덱스에 있는지 출력한다.  

### BOJ 10810
vector를 선언과 동시에 초기화한다.  
반복문으로 M번 i, j, k를 입력받아 그 안에서 i부터 j까지의 벡터의 인덱스에 해당하는 값을 바꾼다.  

### BOJ 27866  
문자열과 인덱스를 입력받는다. 그리고 해당되는 글자 출력  

### BOJ 2743  
문자열을 입력받고, length() 메소드로 길이를 구한다.  

### BOJ 9086  
문자열 s를 선언하고 입력받는다.  
s.begin(), s.end()를 이용해 첫 글자와 마지막 글자를 알아낸다.  

### BOJ 11654  
문자열로 한 글자 입력 받고 int()를 이용해 변환한 것을 출력  

### BOJ 11720  
문자열을 입력받아 해당 글자 하나 하나에 '0'를 빼줌으로써 정수화 시킨 후에 더한다.  
