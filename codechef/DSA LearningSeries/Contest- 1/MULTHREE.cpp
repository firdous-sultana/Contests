#include<bits/stdc++.h>
#define int int64_t
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int test;
	cin>>test;
	while(test--){
		int k, d0, d1, d;
		cin>>k>>d0>>d1;
		int sum = d0 + d1;
		if(k<=7){
			for(int i=0; i<k-2; i++){
				d = sum%10;
				sum+=d;
			}
			if(sum%3 == 0)
				cout<<"YES";
			else
				cout<<"NO";
		}
		else{
			int arr[7], a[7];
			memset(arr, 0, sizeof(arr));
			memset(a, 0, sizeof(a));

			a[0] = d0;
			a[1] = d1;
			a[2] = sum % 10;
			a[3] = (a[0] + a[1] + a[2]) % 10;
			a[4] = (a[0] + a[1] + a[2] + a[3]) % 10;
			a[5] = (a[0] + a[1] + a[2] + a[3] + a[4]) % 10;
			a[6] = (a[0] + a[1] + a[2] + a[3] + a[4] + a[5]) % 10;
      int cycles = (k-3)/4, remain = (k-3)%4;
      int cycle_sum = a[3] + a[4] + a[5] + a[6];
      arr[0] = d0;
			arr[1] = d1;
			arr[2] = a[2];
			arr[3] = cycles * cycle_sum;
      //arr[4], arr[5], arr[6] for remaining digits
			if(remain == 1){
				arr[4] = a[3];
			}
			if(remain == 2){
				arr[4] = a[3];
				arr[5] = a[4];
			}
			if(remain == 3){
				arr[4] = a[3];
				arr[5] = a[4];
				arr[6] = a[5];
			}
      int div_sum = 0;
			for(int i=0; i<7; i++)
				div_sum += arr[i];
      if(div_sum % 3 == 0)
				cout<<"YES";
			else
				cout<<"NO";
		}
		cout<<"\n";

	}
	return 0;
}
