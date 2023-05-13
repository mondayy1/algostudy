### 2438 별찍기 - 1

2중 for 문을 이용.  
안쪽의 for 문은 한줄에 찍을 별의 수만큼 반복하고 바깥쪽의 for문은 찍을 별의 줄의 수만큼 반복.

### 2438 별찍기 - 2

2중 for 문을 이용.  
안쪽에 for문을 두개를 사용.  
하나는 한줄에 찍을 공백만큼 반복, 다른 하나는 한줄에 찍을 별의 수만큼 반복.

### 2440 별찍기 - 3

2중 for 문을 이용.  
안쪽에 for문을 이용해 별의 갯수를 하나씩 줄여가면서 반복해 별 찍기.

### 10807 개수 세기

vector 이용.  
정수를 입력 받아 vector에 넣고 vector[i]와 정수 v를 비교해 같으면 res++.  
res를 출력해 vector에서 v와 같은 수의 개수만큼 출력.

### 10871 X보다 작은 수

vector 이용.  
정수를 입력 받아 vector에 넣고 vector[i]와 정수 X를 비교.  
X보다 작은 vector[i]를 출력.

### 10818 최소, 최대

vector 이용.  
min, max를 각각 min == 1000000, max == -100000으로 설정.  
정수를 입력받아 vector에 넣고 vector[i]와 max, min과 비교.  
max와 비교했을때 vector[i]가 더 크면 max에 vector[i] 값 넣기.  
min과 비교했을때 vector[i]가 더 작으면 min에 vector[i] 값 넣기.  
min과 max값 출력.

### 2562 최댓값

vector 이용.  
10818 문제와 동일하게 max값 구함. 자연수를 입력받으므로 max의 초기값은 0으로 설정.  
최대값일때의 vector[i]에서 maxIndex = i를 해줘 최대값일 때의 인덱스를 구함.  
max와 (maxIndex + 1) 출력. vector의 인덱스는 0부터 시작하기 때문에 +1을 해주어야 함.

### 10810 공넣기

vector를 선언할 때 vector<int> v(N)을 이용해 vector의 크기를 N 만큼으로 설정하고 값을 모두 0으로 함.  
begin, end, ball을 입력받아 vector[begin]부터 vector[end]까지의 값에 ball 값을 넣어줌.  
M만큼 반복 후 vector 출력.

### 27866 문자와 문자열

string을 이용하여 문자열 S 선언.  
getline을 이용해 문자열 입력.  
출력을 원하는 위치 i 입력.  
S[i -1] 출력. S의 인덱스는 0부터 시작하기 때문에 -1을 해주어야 함.

### 2743 단어 길이 재기

string.length()를 이용하여 문자열의 길이 출력.

### 9086 문자열

string.front()로 문자열의 첫 글자 출력.  
string.back()으로 문자열의 마지막 글자 출력.
