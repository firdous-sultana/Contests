#include<bits/stdc++.h>
#define int int64_t
using namespace std;
int32_t main(){
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++){
			cin>>v[i];
		}
		sort(v.rbegin(), v.rend());
		for(int i=0; i<n; i++){
			v[i] = v[i] * (i+1);
			// cout<<v[i]<<" ";
		}
		int max = INT_MIN;
		for(int i=0; i<n; i++){
			if(v[i]>max)
				max = v[i];
		}
		cout<<max;
	return 0;
}
