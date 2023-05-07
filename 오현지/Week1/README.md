## 막혔던 문제 : BOJ_1008
* 문제 : 두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.

* 입력 : 첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)

* 출력 : 첫째 줄에 A/B를 출력한다. 실제 정답과 출력값의 절대오차 또는 상대오차가 10의-9제곱 이하이면 정답이다.  
  <br />

#### 시도1) 소숫점을 출력하기 위하여 `float` type을 사용함.
```cpp
#include <iostream>
using namespace std;

int main() {
	int A, B;
	float ComputationalResults = 0;
	cin >> A >> B;
	ComputationalResults = (float)A / B;
	cout << ComputationalResults;

	return 0;
}
```
오류 -> 소숫점을 다 출력하지 못했음  
<br />
  
#### 시도2) 소숫점을 길게 출력하기 위하여 `double` type을 사용함.
```cpp
#include <iostream>
using namespace std;

int main() {
	int A, B;
	double ComputationalResults = 0;
	cin >> A >> B;
	ComputationalResults = (double)A / B;
	cout << ComputationalResults;

	return 0;
}
```
오류 -> 여전히 소숫점을 더 많이 출력하지 못했음  
<br />  
  
#### 시도3) 구글링
-> cout 기본 출력은 정수 부분이 6자리가 넘어가면 소수점 부분은 출력이 안된다.
-> 따라서 precision을 이용하여 소수점을 고정시켜준다. 
```cpp
#include <iostream>
using namespace std;

int main() {
	int A, B;
	double ComputationalResults = 0;
	cin >> A >> B;
	ComputationalResults = (double)A / B;
	cout << fixed;
	cout.precision(9);
	cout << ComputationalResults;

	return 0;
}
```
해결!!

#### 근데 백준에서는 맞았는데 visual에서는 여전히 6자리로 출력되었다.. 왜지
