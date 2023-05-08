# #1

c++에서 그냥 '<<'나 '>>'를 쓰면 각각 shift left, shift right 연산자로 쓰임
하지만 iostream std의 cin과 cout에서 '<<'과 '>>'연산자는 input output 기능을 제공

>shift left, shift right란?
>
>간단하게 >>{n}은 2의 n제곱만큼 나눈 것 <<{n}은 2의 n제곱만큼 곱한 것

# #2

소수점 자리를 cout으로 출력하려면
std::cout.precision()와 std::fixed()을 이용하여 표현할 수 있지만 printf("%.{n자리}lf")으로도 표현 가능

# #3

return 0는 에러없이 정상적으로 함수가 종료되었다는 것을 알리기위해 씀
하지만, modern c++에서 main에서 만큼은 값을 return하지 않아도 정상적으로 실행됨

