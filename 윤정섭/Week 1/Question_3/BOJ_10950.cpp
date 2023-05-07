#include <iostream>
#include <list>
using namespace std;


int main(void) {
    int cycle_count = 0;
    int first_Input = 0;
    int second_Input = 0;
    int Sum = 0;
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

    return 0;
}