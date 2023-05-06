# BOJ_2753
```c++
int main(void){

    if(Num % 2 != 0) {
        Multiplication = (Num / 2) + 1;
        result = sum * Multiplication;
        sum = sum /2;
        result = result - sum;
    }
    else {
        Multiplication = (Num / 2);
        result = sum * Multiplication;
    }
}
```
단순한 O(N) 반복이 아닌 가우스 계산법을 코드로 만들어보고 싶어 만들어 봄. (1 + Input_Num) * (Input_Num / 2) = Result
예외로는 홀수라면 ((1 + Input_Num) / 2)를 Result 값에 한번 빼주면 됨. 아무리 큰 수라도 빠르고 간단하게 계산이 가능해짐.

# BOJ_2753
```c++
int main(void) {

    std::cin >> cycle_count;

    list<int> L_int(1);
    //Linked List의 원소 한개를 0으로 생성후 초기화한다.
    list<int>::iterator cur = L_int.begin();
    //cur은 0을 가리키고 있다.

    for (int L_input_check = 0; L_input_check < cycle_count; L_input_check++) {
        std::cin >> first_Input >> second_Input;
        Sum = first_Input + second_Input;
        L_int.push_back(Sum);
    }

    L_int.pop_front();
    
    for (int L_output_check = 0; L_output_check < cycle_count; L_output_check++) {
        cout << L_int.front() << endl;
        L_int.pop_front();
    }
}
//문제 : 각 테스트 케이스마다 A+B를 출력한다.
```

단순한 알고리즘이지만 개인적으로 가장 시간을 들여서 만든 Source Code, N개의 A, B를 입력하고 그의 합을 출력하는 알고리즘.

배열을 만들고 값을 넣으면 간단하지만 만약 "singed INT_MAX값을 N의 값으로 넣는다면?" 뜬금없는 궁금증 유발. 그렇다면 int array[INT_MAX]를 넣으면 가능하지만 뭔가 재사용성이 떨어지는 것 같아 고민 후 Linked List를 채용.

처음엔 구현하여 Linked List를 만들 생각이였지만, 너무 코드의 길이가 길어지며 헤더파일<list>를 활용하기로 결정. 처음 써보는 명령어가 많아 재밌게 코드 작성.

Linked List를 사용하며 느낀 단점 : 배열에 비해 상대적으로 시간이 걸림. 값을 중간에 수정하는 상황 외에는 배열을 사용하는 것이 속도면에서는 좋은 것 같음.

