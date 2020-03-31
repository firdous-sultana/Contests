#include<bits/stdc++.h>
using namespace std;

int main(){
	//code
	int test;
	cin>>test;
	while(test--){
		string s, s1, s2;
		cin>>s;
		int n = s.length();
		if(n&1){
			for(int i=0; i<n/2; i++)
				s1.push_back(s[i]);
			for(int i= n/2+1; i<n; i++)
				s2.push_back(s[i]);
		}
		else{
			for(int i=0; i<n/2; i++)
				s1.push_back(s[i]);
			for(int i= n/2; i<n; i++)
				s2.push_back(s[i]);
		}
		// cout<<s1<<" "<<s2<<"\n";
		unordered_map<char, int> mp;
		for(int i=0; i<s1.length(); i++)
			mp[s1[i]]++;
		for(int i=0; i<s2.length(); i++){
			if(mp.find(s2[i]) != mp.end() && mp[s2[i]] != 0)
				mp[s2[i]]--;
		}
		int ctr =0;
		unordered_map<char, int>::iterator it;
		for(it=mp.begin(); it != mp.end(); it++){
			ctr+= it -> second;
		}
		if(ctr == 0)
			cout<<"YES"<<"\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
