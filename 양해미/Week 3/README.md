<h1>Week 3</h1>
<h2>map, set</h2>
<h3>map</h3><br><list><p>정의 : 인덱스로 int가 아닌 다른 자료형을 사용할 수 있는 배열(사실 배열이 아니라 트리임)</p><br>
<p>용도 : 연관있는 두 값을 함께 묶어서 관리하되, 검색을 빠르게 하고 싶은 경우</p><br><p>사용법 : #include map해야됨<br>
<p>1. insert 함수 : 새 요소를 map에 삽입한다. key값을 오름차순 정렬해준다.</p><br><p>2. operator [] 연산자 : map에 새 요소를 삽입한다. 단, map에 키가 이미 존재하면 넘겨준 value로 기존의 value를 덮어 씌운다.([] 사이에 있는 key에 대응하는 값을 참조로 반환하기 때문)</p><br><p>3. find 함수 : map의 핵심 함수! key값을 넘겨 map에서 탐색 후 반복자를 반환하는 함수이다.</p><br><p>4. erase : map에 존재하는 key값의 요소 삭제.<br>5. clear : map의 모든 요소 삭제.</p></p></list><br>
<h3>set</h3>
<list><p>정의 : key만 있는 map혹은 정렬된 집합</p><br><p>용도 : 특정 값에 대해 검색을 빠르게 하고 싶은 경우(set에서는 operator[] 지원 x)</p></list><br>
