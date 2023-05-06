# BOJ_1008
```c++
#include <iomanip>

int main(void) {
    cin >> A;
    cin >> B;
    std::cout << setprecision(10) << (double)A / B;
}
//문제 : 첫째 줄에 A/B를 출력한다. 실제 정답과 출력값의 절대오차 또는 상대오차가 10-9 이하이면 정답이다.
```
처음 사용해보는 setprecision() 함수, <iomanip> 헤더파일을 include 해 사용할 수 있다. (10) -> 10자리 소수점 출력가능.

