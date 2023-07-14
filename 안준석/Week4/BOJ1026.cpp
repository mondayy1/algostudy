#include <bits/stdc++.h>

using namespace std;

int main(){
		int n;
		cin >> n;
		int i;
		int a[50]; 
		int b[50];
		for(i=0;i<n;i++) cin >> a[i];
		for(i=0;i<n;i++) cin >> b[i];
		sort(a,a+n);
		sort(b,b+n);
		int s = 0;
		for(i=0;i<n;i++){
			s += b[i] * a[n-i-1];
		}
		cout << s;
}
