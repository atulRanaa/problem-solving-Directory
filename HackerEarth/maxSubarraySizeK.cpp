#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
using namespace std;


const int N = 1e5+1;

ll ar[N];
int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    ll z,n;
    while(t-- > 0){
        cin>>n>>z;


        for(int i=0;i<n;i++) cin>>ar[i];
        ll ans = 0,Xor=0, maxX =0;
        for(int i=0;i<z;i++) Xor ^= ar[i];
        maxX = Xor;
        for(int i=z;i<n;i++){
            //if(i+z-1 >= n) break;
            Xor ^= ar[i];
            Xor ^= ar[i-z];

            if(Xor <= maxX){
                maxX=Xor;   ans=i-z+1;
            }
        }
        cout<<ans+1<<"\n";

        /*ar[0]=0;
        for(int i=1;i<=n;i++) cin>>ar[i];
        for(int i=1;i<=n;i++) ar[i]^=ar[i-1];
        ll mXor=1000000000000000LL,ans=0;
        
        for(int i=1;i<=n;i++){
            if(i+z-1 > n) break;
            ll temp = ar[i+z-1]^ar[i-1];
            if(temp <= mXor){
                mXor = ar[i+z-1]^ar[i-1];
                ans = i;
            }
        }
        cout<<ans<<"\n";*/
    }
    return 0;
}