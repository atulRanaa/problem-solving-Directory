// spoj incomp
		#include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const int N = 1e6+5;
        #define all(x) x.begin(),x.end()
        #define MOD 1000000007
        #define pii pair<int,int>
        #define pis pair<int,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test ll cse;scanf("%lld",&cse);for(ll i=1;i<=cse;i++)
        #define PI 3.14159265

bool prime(ll n){
	if(n <= 1) return false;
	if(n <= 3) return true;
	if(n%2 == 0 || n%3==0) return false;

	for(ll i=5; i*i <= n; i+=6){
		if(n%i==0 || n%(i+2)==0) return false;
	}
	return true;
}
vector<ll> pfn;
void generate(){
	int dig[] = {2,3,5,7};
	for(int i=1;i<=18;i++){


		for(int j=0;j<4;j++)

	}
}
int main(){
	ll n;
	seive();
	test{
		scanf("%lld",&n);
		printf("%lld\n", (n*(ans[n]+1)) /2);
	}
	return 0;
}
