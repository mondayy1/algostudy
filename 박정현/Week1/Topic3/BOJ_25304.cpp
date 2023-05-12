#include <iostream>

int main(){
    int X, N;
    int a, b;
    std::cin >> X;
    std::cin >> N;

    for(int i=0;i<N;i++){
        std::cin >> a >> b;
        X -= a * b;
    }
    if(X==0)
        std::cout<<"Yes";
    else
        std::cout<<"No";
    return 0;
}