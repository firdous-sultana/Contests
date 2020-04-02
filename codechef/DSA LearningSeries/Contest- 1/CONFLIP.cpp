#include<bits/stdc++.h>
#define int int64_t
using namespace std;
int32_t main(){
	int test;
	cin>>test;
	while(test--){
		int g;
		cin>>g;
		while(g--){
			int i, n, q;
			cin>>i>>n>>q;
			if(n&1){
				if(i==1)
					(q==1)? cout<<n/2<<"\n" : cout<<n/2+1<<"\n";
				if(i==2)
					(q==1)? cout<<n/2+1<<"\n" : cout<<n/2<<"\n";
			}
			else{
				cout<<n/2<<"\n";
			}
		}
	}
	return 0;
}
