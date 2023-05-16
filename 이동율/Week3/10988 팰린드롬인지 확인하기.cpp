#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string a;
    cin>>a;
    bool palindrome = true;
    for(int i=0;i<a.length()/2;i++){
        if(a[i]==a[a.length()-1-i]){}
        else palindrome=false;
    }
    if(palindrome == true) cout<<"1";
    else cout<<"0";
    return 0;
}
