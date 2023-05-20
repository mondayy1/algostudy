### 2720 세탁소 사장 동혁

입력 받은 거스름돈을 25로 나눠 그 몫을 vector[0]에 저장 후 거스름돈에 25로 나눈 나머지를 저장.  
다시 거스름돈을 10으로 나눠 몫을 vector[1]에 저장하고 거스름돈에 나머지 저장.  
그 다음 거스름돈을 5로 나눠 몫을 vector[2]에 저장하고 거스름돈에 나머지 저장.  
마지막으로 vector[3]에 남아있는 거스름돈 저장 후 vector 출력.

### 3003 킹, 퀸, 룩, 비숍, 나이트, 폰

good vector에 미리 { 1, 1, 2, 2, 2, 8} 을 저장.  
lack vector에 현재 있는 피스를 순서대로 입력 받아 저장.  
good[0] - lack[0] 부터 good[5] - lack[5] 까지 출력.

### 5086 배수와 약수

숫자 두 개 first, second를 입력.  
fisrt, second가 모두 0이면 종료.  
second % first가 0이면 factor 출력.  
first % second가 0이면 multiple 출력.  
first % second가 0이 아니고 second % first가 0이 아니면 neither 출력.

### 10988 팰린드롬인지 확인하기

string으로 word와 revert 선언.  
word에 단어를 입력받고 word의 끝부터 revert에 넣으면 revert는 word를 거꾸로한 단어가 됨.  
word와 revert를 비교해 같으면 1, 다르면 0 출력.

### 1157 단어 공부

문자열 s에 단어 입력.  
toupper(s[i]) - 'A' 를 구함.  
toupper를 쓴 이유는 대 소문자 구분 없고 출력을 대문자로 출력 해주기 떄문.  
그리고 - 'A'를 해주는 이유는 만약 s[i] 가 A면 0 B면 1 ... 이 되기 때문. 즉, A 는 0, B 는 1 ... 이렇게 표현 가능.  
vector(toupper(s[i]) - 'A')++를 해주면 vector[0] 부터 A라 생각해 vector[25] 즉 Z까지 단어가 나온 만큼 ++ 해줌.  
반복문을 통해 max에 가장 많이 쓰인 단어가 몇번인지 저장하고 res에 가장 많이 쓰인 단어의 인덱스 + "A"를 저장.  
반복문을 한번 더 이용해 max값과 쓰인 수가 같은 단어가 여러 개 이면 "?"을 출력. 아니면 res를 출력.
