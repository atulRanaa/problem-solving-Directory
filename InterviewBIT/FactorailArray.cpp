    #include <bits/stdc++.h>
    using namespace std;

    
    
    #define MOD 1000000007
    #define pii pair<int,int>
    #define pis pair<int,string>
    #define F first
    #define S second
    #define LCM(a,b) ((a*b)/__gcd(a,b))
    #define inf 1e15
    #define ll long long
    const int N = 1e6+5;

int p[N];
void sieve(){
    for(int i=0;i<N;i++) p[i]=1;
    p[0]=p[1]=0;
    for(int i=2;i < N;i++){
        if(p[i])
            for(int j=i+i;j < N; j+=i) p[j]=0;
    }
    for(int i=1;i<N;i++) p[i]+=p[i-1];
}
ll p2[N];
void pow2(){
    p2[0]=1;
    for(int i=1;i<N;i++){
        p2[i]= (p2[i-1]+p2[i-1]) % MOD;
    }
}
ll solve(vector<int> &A){

    int n = A.size();
    sieve();

    for(int i=0;i < 15;i++) cout<<p[i]<<" "; cout<<"\n";
    pow2();

    cout<<n<<" "; for(int i=0;i<n;i++) cout<<A[i]<<" "; cout<<"\n";

    unordered_map<int,ll> mapp;

    for(int i=0;i<n;i++){
        int t = A[i];
        cout<< "pf "<< t<<" "<< p[t] <<"\n";
        if(p[t] != 0) mapp[ p[t] ]++;
    } 

    cout << mapp.size() <<"\n";
    ll ans = 0;
    for(auto ele: mapp)
        ans = (ans + p2[ ele.S ]-1) % MOD, cout<<ele.F<<" "<<ele.S<<"\n";

    return ans;
}

int main()
{
    int n; scanf("%d",&n);
    vector<int> A(n);

    for(int i=0;i<n;i++) scanf("%d", &A[i]);


    printf("%lld\n" , solve(A));
    return 0;
}