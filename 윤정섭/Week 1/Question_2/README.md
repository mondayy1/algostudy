# BOJ_2753
```c++
int leap_year(int year) {
 
    if ((year % 4) != 0) return 0;
    else {
        if ((year % 400) == 0) return 1;
        else if ((year % 100) == 0) return 0;
        else return 1;
    }
}
//문제 : 째 줄에 연도가 주어진다. 연도는 1보다 크거나 같고, 4000보다 작거나 같은 자연수이다.
```
if문을 조건에 맞게 활용하여 최소한의 계산으로 값을 구해낼 수 있다.
if 다음 else에서 (year % 400) 조건을 먼저 계산함으로써 불필요한 계산량을 줄인다.


# BOJ_2884
```c++
void timer_Calculation(int *Hour, int *Minute) {
	*Minute = *Minute - 45;
	if (*Minute < 0) {
		*Hour = *Hour - 1;
		*Minute = *Minute + 60;
	}
	if (*Hour < 0) *Hour = 23;
}

```
Minute에 -45를 계산한 뒤 음수가 나온다면 Hour -= 1; , Hour 값이 내려갔기 때문에 +60 해준다. 만약 (--Hour)이 음수라면 23으로 값을 변경해준다.

pointer을 활용한 덕분에 직접적으로 값을 변경이 가능함.


# BOJ_9498
```c++
int main(void) {
    int Test_Score = 0;
    
    cin >> Test_Score;
    
    if (Test_Score <= 100 && Test_Score >= 90) std::cout << "A";
    else if (Test_Score <= 89 && Test_Score >= 80) std::cout << "B";
    else if (Test_Score <= 79 && Test_Score >= 70) std::cout << "C";
    else if (Test_Score <= 69 && Test_Score >= 60) std::cout << "D";
    else std::cout << "F";
}
```

이러한 코드는 단순하게 Swith를 활용하여 값을 구하는 것도 가능하다.

