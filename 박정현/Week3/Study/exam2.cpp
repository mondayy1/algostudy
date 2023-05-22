#include <iostream>
#include <vector>

using namespace std;

pair<int, double> p;

int main(){
    vector<pair<int, int> > v;

    v.push_back(make_pair(10, 20));
    v.push_back(make_pair(30, 40));
    v.push_back(make_pair(50, 60));

    cout << v[0].first << " " << v[0].second << endl;
    cout << v[1].first << " " << v[1].second << endl;
    cout << v[2].first << " " << v[2].second << endl;
}