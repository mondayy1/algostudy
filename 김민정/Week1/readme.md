## week1 과제 풀이 개념
### namespace
namespace를 이용해서 코드를 줄임 -> 별칭 같은데 다른것으로 대체해서 작성하는 것이 아닌 아예작성을 안함
`using namespace std;`를 이용한다
&nbsp;
### 화면 출력
iostream을 사용해서
`cout << "Hello World1" << endl;`로 출력한다 만약 마지막 줄바꿈을 넣고 싶지 않다면 `cout << "Hello World!";` endl를 빼고 사용
&nbsp;
### 변수 선언하기
`int a;` 자료형 변수명 이렇게 선언하고 =를 통해서 초기화 가능
&nbsp;
### 기본 연산
int형의 경우 5/4 -> 1로 출력 소수점을 버린다
&nbsp;
### 변수값 입력 받기
변수의 값을 입력 받기 위해 `cin >> <변수명>`이다 출력할때 <<와 반대이니 헷갈리지 않도록
&nbsp;
### if 문
``` cpp
    if (조건){
      실행문;
    } else if(조건문){
      실행문;
    } else {
      실행문;
    }
```
    
### for 문
``` cpp
    for (선언;조건;증감식){
      실행문;
    }
```
### while 문
``` cpp
    while(조건){
      실행문;
    }
    
