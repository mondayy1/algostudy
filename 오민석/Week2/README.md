# Why vector?
---

|  | 장점 | 단점 |
| --- | --- | --- |
| 배열 | 인덱스 접근. 구현 용이 | 지정한 사이즈만 사용 가능 |
| 리스트 | 유동적인 메모리 사용. 삽입삭제 용이 | 원소 찾기 어려움 |
- 배열의 단점 보완 : **vector**
- 리스트의 단점 보완 : Doubly Linked List

# vector는 어떻게 늘어나는가
---
```cpp
#include <iostream>
#include <vector>

void printCapacityAndSize(const std::vector<int>& v) {
    std::cout << "capacity: " << v.capacity() << ", ";
    std::cout << "size: " << v.size() << "\n";
}

int main(void) {
    std::vector<int> v(1, 0);
    const int fibo[5] = { 1, 1, 2, 3, 5 };
    
    printCapacityAndSize(v);
    for (int i = 0; i < 5; i++) {
        v.push_back(fibo[i]);
        printCapacityAndSize(v);
    }
    return 0;
}

/* 결과
capacity: 1, size: 1
capacity: 2, size: 2
capacity: 4, size: 3
capacity: 4, size: 4
capacity: 8, size: 5
capacity: 8, size: 6
*/
```

- push_back 등의 **삽입(추가)** 연산이 일어났을 때, capacity를 확인하고 부족하다면 2배로 늘린다
- **늘린다?**
즉 새로운 배열을 생성하고 기존의 배열의 원소를 모두 집어 넣어 **늘리는 것처럼** 보이게 한다

# Why string?
---
|  | 특징 | 단점 |
| --- | --- | --- |
| 문자 배열 | char []의 방식으로 생성
맨 마지막에 ‘\0’을 넣어야 함 | ‘\0’에 대한 용량을 개발자가 해야함
유동적인 string을 가지기 힘듦 |
- char[]의 단점을 보완 : **string**


# string을 사용한다는 것은
---
```cpp
// index 2부터 3까지 출력하는 C++ code
#include <iostream>
#include <string>

int main(void) {
    std::string s;
    std::cin >> s;
    std::cout << s.substr(2, 3) << "\n";    // Error
    return 0;
}

/*
In: hello
Out: llo
*/
```

```python
s = input()
print(s[2:3])

'''
In: hello
Out: l
'''
```

- 문자열에 대한 문제를 해결하는데에는 C++도 좋은 언어지만 **Python은 더 좋다**!
- 위의 코드를 보고 왜 **파이썬**이 더 좋고, 어떤 점에서 C++이 불편한 지 생각해보자
