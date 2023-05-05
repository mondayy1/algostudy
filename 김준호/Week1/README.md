**BOJ_1008 A/B**
1.float와 double의 차이

: 표현할 수 있는 실수가 얼마나 정밀한가 차이임. double이 더 많은 소숫점을 표현하여 계산할 수 있어 정밀하기 때문에 오차 적음

1. 소수점 ?자리까지 출력

: precision으로 넘겨준 값 만큼만 출력됨 ex) precision(9)→소수점 9번째짜리까지 출력

**BOJ_10950 A+B-3**

1.동적 할당
: int \*arr=new int[t]//

할당할 배열만큼 \*를 쓰면서 new int [t]사용

if 2차원배열?

```
int** arr = new int*[row];
```

_//선언하고자 하는 이차원 배열의 행의 수 만큼 동적 할당_

```
for(int i = 0; i < row; i++)

{

arr[i] = new int[col];

}
```

각 행 arr[i]에서 각각 동적할당 col만큼 동적할당 시켜준다.

1. 동적할당 해제

```
: delete [] arr(1차원 배열) 배열을 동적할당했다면 변수앞에 []해줘야함
```

if 2차원배열 해제?→역순!

```
for(int i=0; i<col; i++)
delete[] arr[i];
```

각각의 row배열에 들어있는 col만큼의 배열 해제한 후

```
delete[] arr;
```

row배열 해제

**BOJ_25314 코딩은 체육과목**

1. long?

: int 앞에 long long이 붙게 될 경우 8byte의 정수형을 저장할 수 있게 된다.

- int와 long int 모두 4바이트라면 차이는?
  short int(2byte)<int(4byte)<long int(4byte+a)
  long int는 int보다 저장범위 더 넓다.

**BOJ_11720 숫자의 합**

1. string to int?

: stoi()

2. int to string

:to_string()
