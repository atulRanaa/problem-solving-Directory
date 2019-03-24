#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		int l = s.length();
		char c = s[0];
		long long int ans = 0,count = 0,start = 0;
		for(int i=0;i<l;i++){
			if(s[i]==c) count++;
			else{
				if(start-1 >=0 && s[i]==s[start-1]) ans += 1;
				ans += count*(count-1)/2;

				count =1;
				start =i;
				c = s[i];
			}
		}
		ans += count*(count-1)/2;
		cout<<ans<<endl;
	}
	return 0;
}