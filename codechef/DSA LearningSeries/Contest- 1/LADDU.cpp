#include<bits/stdc++.h>
#define int int64_t
using namespace std;
int32_t main(){
	int test;
	cin>>test;
	while(test--){
		int a;
		int sum =0;
		string nat;
		cin>>a>>nat;
		while(a--){
			string s1;
			cin>>s1;
			if(s1 == "CONTEST_WON"){
				int rank;
				cin>>rank;
				sum+= 300+ ((rank<20)?(20-rank):0);
				// cout<<sum<<" ";
			}
			if(s1 == "TOP_CONTRIBUTOR"){
				sum+= 300;
				// cout<<sum<<" ";
			}
			if(s1 == "BUG_FOUND"){
				int severity;
				cin>>severity;
				if(severity>= 50 && severity<=1000)
					sum+= severity;
				// cout<<sum<<" ";
			}
			if(s1 == "CONTEST_HOSTED"){
				sum+= 50;
				// cout<<sum<<" ";
			}
		}
		if(nat == "INDIAN")
			cout<<(sum/200)<<"\n";
		else
			cout<<(sum/400)<<"\n";
	}
	return 0;
}
