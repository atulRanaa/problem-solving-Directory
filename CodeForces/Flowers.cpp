#include<stdio.h>
using namespace std;

#define lli long long int
#define mod 1000000007
int main(){
	
	lli l,r,dp[100010];
	lli t,k; scanf("%lld %lld",&t,&k);
	
	for(int i=0;i <= 100000;i++) dp[i] = (dp[i]+(i < k)?1:dp[i-1]+dp[i-k])%mod;
	for(int i=1;i <= 100000;i++) dp[i] = (dp[i]+dp[i-1])%mod;
	while(t--){
		scanf("%lld %lld",&l,&r);
		printf("%lld\n",(dp[r]-dp[l-1])%mod);
	}

	return 0;
}