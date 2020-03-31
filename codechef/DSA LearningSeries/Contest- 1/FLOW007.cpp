#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n, dig = 0, rev = 0;
		cin>>n;
		// string s1 = to_string(n);
		// reverse(s1.begin(), s1.end());
		// cout<<s1<<"\n";
		while(n !=0){
			dig = n % 10;
			rev = rev* 10 + dig;
			n/=10;
		}
		cout<<rev<<"\n";
	}
	return 0;
}
