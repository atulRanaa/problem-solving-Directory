/*
*
*"@NainwalArun"
*
*/
#include <bits/stdc++.h>
using namespace std ;

#define ft first
#define sd second
#define pb push_back
#define all(x) x.begin(),x.end()

#define ull unsigned long long int
#define ll long long int
#define vi vector<long long int>
#define vii vector<pair<long long int,long long int> >
#define pii pair<long long int,long long int>
#define mp make_pair
#define arun() int main()
#define loop(i, a, b) for(i=a; i<b; i++)
#define pool(i, a, b) for(i=a; i>b; i--)
const int N = 1e5 + 10;
const int mod = 1e9 + 7;
const ll INF = 1LL << 62;

ll power(ll x,ll y){
  ll t=1;
  while(y>0){
    if(y%2) y-=1,t=t*x;
    else y/=2,x=x*x;
  }
  return t;
}

ll inverse(ll q)
{
    ll t;
    t=power(q,mod-2);
    return t;
}

arun(){
    ll t,n,i,j,k,l,first,second;
    scanf("%lld",&t);
    while(t--){
    	scanf("%lld",&n);
    	ll a[64]={0};
    	loop(i,0,64){
    		a[i]=n%2;
    		n=n/2;
    	}
    	first=-1;
    	second=-1;
    	for(i=63;i>=0;i--){
    		if(a[i]==1){
    			if(first==-1){
    				first=i;
    			}
    			else if(first!=-1 && second==-1){
    				second=i;
    				break;
    			}
    		}
    	}
    	if(first==0){
    		cout<<0<<endl;
    	}
    	else{
    	if(second==-1){
    		first--; 
    		second=first-1;
    	}
    	ll ans=0;
    	for(i=second;i>=0;i--){
    	     	ans=(ans+power(2,first))%mod;
    		ans=(ans+power(2,i))%mod;
                ans=ans%mod;
             
            // ans=(ans+power(2,first)+power(2,i))%mod;
    	}
        //ans%=mod;
    	for(i=first-1;i>=1;i--){
    		k=(power(2,i)-1);
    		ans=(ans+power(2,i)*(i))%mod;
    		ans=(ans+k)%mod;
                ans=ans%mod;
           // ans=(ans+k+power(2,i)*(i))%mod;
    	}
    	printf("%lld\n",ans%mod);
    	}
    }
return 0;

}
