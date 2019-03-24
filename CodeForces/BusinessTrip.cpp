#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int k,ar[12];
cin>>k;
for(int i=0;i<12;i++) cin>>ar[i];

if(k==0) cout<<0;
else{
	int i,sum=0,f=0;

	sort(ar,ar+12);
	for(i=11;i>=0;i--){
		sum+=ar[i];
		if(sum >= k){f=1; break;}
	}

	if(f==1) cout<<(12-i);
	else cout<<-1;
}
return 0;
}