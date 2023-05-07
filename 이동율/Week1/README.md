# Week1

기본 입출력

### #include<iostream>

//iostream의 라이브러리의 명령어를 사용하겠다는 뜻

//Input Output stream이라는 뜻으로 입출력과 관련된 명령어들이 있음.

### using namespace std;

위 내용을 써주지 않으면 std::cout,std::cin 이런식으로 써야함.

### 1008번 A/B

소수점 출력문제

cout<<fixed; //소수점 고정

cout.precision(10); //10번째 자리로 표현 뒷자리는 반올림됨.

### endl과 \n의 차이점

endl은 출력후 출력 버퍼를 다 비움. \n은 그렇지 않음

따라서 매번 버퍼를 비워주는 작업을 하는 endl이 더 느림.

버퍼를 안비우면 문제가 생기는가?

sleep과 같은 출력에 시간차가 나거나 fork로 프로세스가 나뉘면 그럴 수 있음

but 코테 준비할땐 아무런 문제 없음 따라서 \n사용하기
