
// hackerearth
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
ll h[101][10005];

ll solve(ll k, ll n){ return h[k][n]; }
int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    
    memset(h,0, sizeof h);
    
    ll p[105];
    p[0]=1;
    for(int i=1;i<=101;i++) p[i]=(p[i-1]+p[i-1]) % mod;
    
    for(int i=1;i<=100;i++){
        ll sum = p[i]-1;
        for(int j=1;j<=i;j++){ h[i][j]= p[j-1]; }
        h[i][i+1]=sum;                                                                            ;
        for(int j=i+2;j<10005;j++){
            sum = (sum-h[i][j-i-1]);
            sum = (sum+h[i][j-1]) % mod;

            h[i][j] = sum;
        }
    }
    // for(int i=1;i<=10;i++){
    //     for(int j=1;j<=10;j++) cout<<h[i][j]<<" "; cout<<"\n";
    // }

    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        long long N;
        cin >> N;
        long long K;
        cin >> K;

        long long out_;
        out_ = solve(K, N);
        cout << out_;
        cout << "\n";
    }
}