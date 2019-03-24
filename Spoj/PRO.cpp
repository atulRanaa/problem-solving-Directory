// spoj
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


int main(){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
	
    multiset<int> b;
	long long ans = 0;
	int t; cin >> t;

	while(t-- > 0){
		int n,val; cin >> n;
		for(int i=0;i<n;i++){
			cin >> val; b.insert(val);
		}
		int small = *b.begin();
		int large = *b.rbegin();

		ans += (large-small);
		b.erase( b.find(small) );
		b.erase( b.find(large) );
	}
	cout<< ans << "\n";
	return 0;
}