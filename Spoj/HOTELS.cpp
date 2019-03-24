#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	long long int n,m;
	cin>>n>>m;
	long long int ar[n];
	for(int i=0;i<n;i++) cin>>ar[i];
	
	long long int sum=0,ans=0;
	int i=0,j=0;
	while(i < n){
		while(i < n && sum + ar[i] <= m){
			sum += ar[i];
			i++;
		}
		ans = max(sum,ans);
		sum -= ar[j++];
	}
	cout<<ans;
	return 0;
}