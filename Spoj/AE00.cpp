#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int divisors[10010]={0};
	for(int i=1;i<10010;i++){
		for(int j=i;j<10001;j+=i) divisors[j]+=1; 
	}	
	//for(int i=0;i<20;i++) cout<<i<<" "<<divisors[i]<<"\n";
	int n;cin>>n;

	int ans = 0;
	for(int i= 1;i<=n;i++) ans += (divisors[i]+1)/2;
	cout<<ans;
	return 0;
}