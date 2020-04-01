#include<bits/stdc++.h>
#define int int64_t
using namespace std;
int32_t main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++)
			cin>>arr[i];
		int ctr = 0, max = arr[0];
		for(int i=1; i<n; i++){
			if(arr[i] <= max){
				max = arr[i];
				ctr++;
			}
		}
		cout<<ctr+1<<"\n";
	}
	return 0;
}
