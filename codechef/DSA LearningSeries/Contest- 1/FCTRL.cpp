#include<bits/stdc++.h>
#define int int64_t
using namespace std;
int32_t main()
 {
	//code
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    int ctr = 0;
	    for(int i=5; n/i>=1; i*=5){
	        ctr+= n/i;
	    }
	    cout<<ctr;
	    cout<<"\n";
	}
	return 0;
}
