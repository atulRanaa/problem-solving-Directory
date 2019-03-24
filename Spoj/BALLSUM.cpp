// spoj

		#include <bits/stdc++.h>
		#define ll long long int
		using namespace std;
int main(){
	ll n,k;
	while(1){
		scanf("%lld %lld",&n,&k);
		if(n==-1 && k==-1)
			break;

		ll t=0,a=0,b=0;
			b = (n*(n-1))/2;
			t = (k&1)?((k-1)/2):((k-2)/2);

		if(k&1){
			a += (1+1+(t-1)*2);
			a *= t;
			a /= 2;
		} 
		else{
			a += (2+2+(t-1)*2);
			a *= t;
			a /= 2;
		}
		ll gcd = __gcd(a,b);
		a /= gcd;
		b /= gcd;

		if(a <= 0) printf("0\n");
		else if(a==b) printf("1\n");
		else
			printf("%lld/%lld\n",a,b);
	}	
	return 0;
}