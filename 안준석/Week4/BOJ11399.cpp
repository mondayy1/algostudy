#include <bits/stdc++.h>

using namespace std;

int main(){
		int n;
		cin >> n;
		int arr[1000];
		for(int i=0;i<n;i++){
				cin >> arr[i];
		}
		sort(arr,arr+n);
		int sum = 0;
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
					sum += arr[j];
			}
		}
		cout << sum;
}
