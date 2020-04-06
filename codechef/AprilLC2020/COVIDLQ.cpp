#include<bits/stdc++.h>
#define int int64_t
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++)
			cin>>arr[i];
		int diff = INT_MAX, prev = 0, curr =0, flag = 0;

		for(int i=0; i<n; i++){
			if(arr[i] == 1){
				prev = i;
				break;
			}
		}

		for(int j= prev+1; j<n; j++){
			if(arr[j] == 1){
				curr = j;
				diff = curr - prev;
				prev = curr;
				// j = prev;
			}
			if(diff<6){
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			cout<<"YES\n";
		else if(flag==1)
				cout<<"NO\n";
	}
	return 0;
}
