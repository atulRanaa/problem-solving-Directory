#include <bits/stdc++.h>

using namespace std;

int main(){
		int n; cin>>n;
		int ar[n];
		for(int i=0;i<n;i++) cin>>ar[i];

		sort(ar,ar+n,greater<int>());
		
		bool check[n];
		memset(check, true, sizeof(check));

		int i=0,j = 1;
		while(i < n && j < n){
			if(ar[i] > ar[j]){
				check[j] = false;
				i++;
				j++;
			}
			else if(ar[i]==ar[j]) j++;
		}


		for(int i=0;i<n;i++) cout<<ar[i]<<" "; cout<<"\n";
		for(int i=0;i<n;i++) cout<<check[i]<<" "; cout<<"\n";

	return 0;
}