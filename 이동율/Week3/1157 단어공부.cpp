#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<char,int> m;
    string a;
    cin>>a;
    for(int i=0;i<a.length();i++){
        a[i]=toupper(a[i]);
        m[a[i]]++;
    }
    int max=-1;
    bool dup=false;
    char res;
    for(auto i=m.begin();i!=m.end();i++){
        if(max<i->second){
            max=i->second;
            res=i->first;
        }
    }
    int cnt=0;
    for(auto i=m.begin();i!=m.end();i++){
        if(max==i->second){
            cnt++;
        }
        if(cnt>=2) dup=true;
    }
    if(dup==true) cout<<"?";
    else cout<<res;
}
