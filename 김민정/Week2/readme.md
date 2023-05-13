week2

### 형변환

이번 문제풀이에서 형변환이 필요한 경우가 있었다 배열 -> int로 또는 char -> int

char 형 데이터를 int로 출력하게 된다면 아스키 코드값이 나오게 된다

char -> int변환할때

``` cpp
char c ='a';
cout << (int)c;  //97출력
```

그냥 정수로 받을려면 다른 방법이 필요하다

``` cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "123";
    //cout << str + 3 << endl;
  	//위는 문자열 +3 이라 자료형이 달라 오류가 발생된다
    int num = stoi(str);
    cout << num + 3  << endl;
}
```

**stoi** = string to int

**stof** = string to float

**stol** = string to long

**stod** = string to double

위 함수는 string에 포함되어 있고 문자열 -> 숫자자료형으로 변환할 때 사용한다

&nbsp;

&nbsp;

### 입력 오류

문제를 풀때 입력이 2개 연속으로 있으면 cin 다음 getline이면 입력이 종료된다

``` cpp
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int n;
    cin >> n;
    cin.ignore();
    for (int i =0;i<n;i++){
        getline(cin,str);
        cout << str.front();
        cout << str.back() << endl;
    }
}
```

그 때 `cin.ignore();`를 사이에 넣어주어서 해결 -> `cin >>n;`에서 개행문자 `\n`이 남아있어서 getline이 실행되지 않고 바로 종료 

`cin.ignore();`를 통해 버퍼를 초기화 시켜주면 된다

**cin** => 공백 혹은 개행문자 이전까지 입력을 받는다

**getline()** => 2가지 종류가 있음 공백 입력 가능

* iostream에 있는 cin.getline(변수 주소, 최대입력수,제한자)  제한자는 별도 지정하지 않으면 개행 문자

* string에 있는 getline 위 코드에서는 이걸 사용함 getline(입력스트림,str객체,구분자) 구분자는 선택사항(구분자를 만날때까지 저장)
  * 해당 getline은 위 코드와 같은 현상이 일어날 수 있다

&nbsp;

### string

|      **string str2(str1);**       | str1 문자열을 복사한 str2 생성                               |
| :-------------------------------: | ------------------------------------------------------------ |
|         **str.at(index)**         | index 위치의 문자 반환. 유효한 범위인지 체크 O               |
|          **str[index]**           | index 위치의 문자 반환. 유효한 범위인지 체크 X. 따라서 at 함수보다 접근이 빠름 |
|          **str.front()**          | 문자열 가장 앞 문자 반환                                     |
|          **str.back()**           | 문자열 가장 뒤 문자 반환                                     |
| **str.length()** = **str.size()** | 문자열 크기                                                  |
|          **str.empty()**          | 빈 문자열인지 확인                                           |
|       **str.append(str2)**        | str 뒤에 str2 문자열을 이어 붙여줌 ('+' 와 같은 역할)        |
|       **str.find("abcd")**        | "abcd"가 str에 포함되어있는지를 확인. 찾으면 해당 부분의 첫번째 index를 반환 |
|       **swap(str1, str2)**        | str1과 str2를 바꿔준다                                       |

