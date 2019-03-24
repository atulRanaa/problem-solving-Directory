#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int ex,newbie;
	cin>>ex>>newbie;
    int ans = 0;
	
	while((ex >=2 && newbie >=1) || (ex >=1 && newbie >=2)){
		if(ex >= newbie){
			ex -= 2;
			newbie -= 1;

			ans++;
		}
		else{
			ex -= 1;
			newbie -= 2;

			ans++;
		}
	}  

	cout<<ans;
	return 0;
}