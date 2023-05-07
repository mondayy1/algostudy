#include <iostream>
using namespace std;

int main(void){
    int total_sum_cost = 0;
    int Num = 0;
    int Sum = 0;

    cin >> total_sum_cost >> Num;

    int price = 0;
    int kind_of_product = 0;

    for(int check_total_count = 0; check_total_count < Num; check_total_count++){
        cin >> price >> kind_of_product;
        Sum = price * kind_of_product;
        total_sum_cost = total_sum_cost - Sum;
    }

    if(total_sum_cost == 0) std::cout << "Yes";
    else std::cout << "No";

    return 0;
}