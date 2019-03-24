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
#define loop(i, a, b) for(i=a; i<b; i++)
#define pool(i, a, b) for(i=a; i>b; i--)
const int N = 1e5 + 10;
const int mod = 1e9 + 7;
const ll INF = 1LL << 62;


int main(){
	ll t,n,i,j,k,l,flag,ans,f1,f2;
	cin>>t;
	while(t--){
		cin>>n;
		ll a[n];
		ll bits[n][32];
		memset(bits,0,sizeof(bits));
		loop(i,0,n){
			cin>>a[i];
			l=a[i];
			j=0;
			while(l>0){
				bits[i][j]=l%2;
				l=l/2;
				j++;
			}
		}
          for (i = 31; i>=0; i--)
          {
             f1=1;
             for (j = 0; j<=31; j++)
             {
                f2=0;
                for (l= 0; l <n; l++){
                   if(bits[l][j]==0&&bits[l][i]==1){
                                                     f2=1;
                                                     break;
                                                   } 
                   if(j==i) f2=1;
                }
                if(!f2){
                        f1=0;
                        break;
                       }
             }
             if(f1) break;
          }

         if(f1) cout<<"YES"<<endl;
         else  cout<<"NO"<<endl;
         
	}
	
return 0;
}
