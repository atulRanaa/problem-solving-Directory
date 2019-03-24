#include<bits/stdc++.h>
using namespace std;

int main(){

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		char str[n];
		string s,s1;

		for(int i=0;i<n;i++){
			cin>>str[i];
			s += str[i];
		}
		bool f = true;
		for(int i=1;i<n;i++){
			if((str[i-1]-'0') < (str[i]-'0')){
				f = false;
				break;
			}
		}
		if(f) cout<<-1<<endl;
		else{
			next_permutation(str , str+n);
			for(int i=0;i<n;i++) s1 += str[i]; 
		
		 	cout<<s1<<endl;
		}
	}

	return 0;
}