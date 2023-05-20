#include <iostream>
#include <string>
using namespace std;
string a;
int arr[26];


int main()
{
    int max = 0;
    char ans;
    cin >> a;

    for(int i=0;i<a.length();i++)
        if(a[i]>='a') arr[a[i]-'a']++;
        else arr[a[i]-'A']++;

    int flag = 0;
    for(int i=0;i<26;i++)
        if(arr[i]==max)
        {
            ans = '?';
            
        }
        else if(arr[i]>max){
            max = arr[i];
            ans = 'A'+i;
        }

    cout << ans;
    
    return 0;
}