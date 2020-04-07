#include<bits/stdc++.h>
#define int int64_t
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int test;
	cin>>test;
	int m = 1000000007;
	while(test--){
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++)
			cin>>v[i];
		sort(v.rbegin(), v.rend());
		int sum = 0, res;
		for(int i=0; i<n; i++){
			if((v[i] - i) > 0){
				sum += (v[i] - i)%m;
			}
		}
		res = sum % m;
		cout<<res<<"\n";
	}
	return 0;
}
