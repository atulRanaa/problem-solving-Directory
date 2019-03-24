#include<bits/stdc++.h>
using namespace std;

long long int ar[100001];
long long int solve(long long int n){
	
	if(n > 0 && n < 100001 && ar[n]!=-1) return ar[n];
	else{
		if(n==0) return 0;
		long long int t1 = n/2 + n/3 + n/4;
		long long int t2 = n;
		long long int ans1=0,ans2=0;
		if(t1 >= t2 && t1 != 0){
			ans1 = solve(n/2) + solve(n/3) + solve(n/4);
		}
		else ans2 = n;
		//cout<<n<<" "<<max(ans1,ans2)<<endl;
		return max(ans1,ans2);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	long long int n;
	for(int i=0;i<100001;i++) ar[i]=-1;
	
	for(int i=0;i<100001;i++){
		ar[i] = solve(i);
	}

	while(cin>>n){
		long long int ans = solve(n);
		cout<<ans<<endl;
	}
	return 0;
}