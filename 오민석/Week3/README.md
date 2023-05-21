# Why Set?

---

|  | 특징 | 사용법 |
| --- | --- | --- |
| set | 단일 원소 O, 정렬 O | set<T> |
| unorderd_set | 단일 원소 O, 정렬 X, 효율적 | unordered_set<T> |
| multiset | 단일 원소 X, 정렬 O | multiset<T> |
| array | 단일 원소 X, 정렬 X | vector<T> |

→ Specific Order + Unique Elements + Array이 필요하다면 Set을 쓰자!

# Set은 왜 push가 없을까?

---

```cpp
#include <iostream>
#include <set>
using namespace std;

int main(void) {
    set<int> set1;
    set1.insert(1);
    set1.insert(3);
    set1.insert(2);
    return 0;
}
```

→ 원소를 넣으면 바로 정렬이 된다는 것은 알맞은 자리에 삽입하는 것과 같다. (이진 검색 트리) <br>
  즉, push : 원소를 넣는다 | insert : 원소를 특정 장소에 삽입한다

# Why Map?

---

|  | 특징 | 사용법 |
| --- | --- | --- |
| array | 인덱스 접근 가능 | vector<T> |
| map | 인덱스(key)가 숫자가 아니여도 됨 | map<key, T> |
| map의 다른 것들 | multi : 여러개, unordered : 해시 | [Features]map<key, T> |

→ 생각해보면 숫자형만 인덱스를 쓰는 건 불편하니까 당연함!

# Map 활용하기!

---

```cpp
map<string, int> m;

for (auto m_data: m) /* Iteration Code */
m['myMathFinalExamScore'] = 3;
```

→ map은 잘 쓰면 너무 유용합니다! (저의 코딩 인생이 많이는 아니고 한 3° 바뀜)

# Why Pair?

---

```cpp
struct Point {
		int y, x;
};
/* Point 관련 함수 */

class Point {
		private:
			int y, x;
		public:
			/* Point 관련 함수 */
};
```

→ 두개 원소를 쌍으로 가지고 있는 데이터가 있다면, pair를 사용하자! 

# 3개 이상의 원소는 어떻게 하지?

---

```cpp
// 3개
pair<int, pair<int, int>>

// 4개
pair<pair<int, int>, pair<int, int>>

// ...
pair<pair<pair ... int>, int>, int>, int>>
-> p.first.first.first.second.second.second.first.second
```

→ 3개 정도 까지는 쓸만하나 헷갈리지 않기 위해서는 구조체나 클래스를 사용한다!

```cpp
struct Person {
		int age, height, weight;
		string name;	
};
```

→ 명시적인 이름과 확실한 구조체(클래스) 이름은 훨씬 유지보수가 편하다.
