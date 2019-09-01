

// hackerearth
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const ll N = 1e6+5;
        const ll MOD = 1000000007;
        #define all(x) x.begin(),x.end()
        #define pii pair<int,int>
        #define pis pair<ll,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test ll cse;cin>>cse;for(ll _i=1;_i<=cse;_i++)
        #define PI 3.14159265
        #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        const double EPS = 1E-9;
        typedef vector<vector<double>> matrix;
        typedef vector<int> vi;

// int prime[N];

// void numofFact(int num){
//     int res = 1;
//     map<int,int> mapp;
//     while(num > 1){
//         mapp[ prime[num]]++;
//         num /= prime[num];
//     }
//     cout<<1;
//     for(pii e: mapp) for(int i=0;i<e.S;i++) cout<<" x " << e.F;

//     cout << "\n";
// }
// void sieve(){
// 	memset(prime,0,sizeof(prime));
//     prime[0] = prime[1] = 1;
    
//     for(int i = 2; i < N; i++){
//         if(prime[i]==0){
//             for(int j=i; j < N;j+=i) prime[j] = i;
//         }
//     }
// }
int main(){
    fast;
    // sieve();
    // int n;
    // while( cin >> n){
    //     numofFact(n);
    // }
    ll n;    
    test{             
        cin >> n;
        if(n < 3){
            cout<<0<<"\n";
            continue;
        }
        ll total_comb =  ((n-1)*(n-2))>>1; // nC3;

        ll val = n-3;
        ll it = val&1, cnt = (n%3==0)?(1):(0);
        while(val/2 > it) { cnt+=3; it+=2; val-=2;}
        //cout<< total_comb << "-" << cnt <<" ";
        cout << total_comb - cnt <<"\n";

    }
    /*
        1 5 5 
        3 4 4
        
        (n - 3) = 8/2 = 4, 4, 0
                  7/2 = 3, 3, 2
                  6/2 = 2, 2, 4
        9-3 = 6/2 = 3, 3, 0
              5/2 = 2, 2, 2
              4/2 = 2, 2, 2

        (1 1 2) * 3
        1 1 3 * 3
        1 2 2 * 3



        1 1 4 * 3
        1 2 3 * 3
        2 2 2 * 1
              7/2 = 3, 3, 1
              6/2 = 2, 2, 3  



              0
              0 0
                0
                0 0
              0   0
                  0
    */
    return 0;
}