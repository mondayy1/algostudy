#include <iostream>
#include <string>

int main(){
    std::string word;
    int n;

    std::cin >> n;
    for(int i=0;i<n;i++){
        std::cin >> word;
        std::cout<<word.front()<<word.back()<<'\n';
    }
    return 0;
}