// codechef      incomplete
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long int ll; 
        const ll N = 3e5+5;
        const ll MOD = 1000000007;
        #define all(x) x.begin(),x.end()
        #define pii pair<ll,ll>
        #define pis pair<ll,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test ll cse;cin>>cse;for(ll _i=1;_i<=cse;_i++)
        #define PI 3.14159265
        #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
        typedef vector<vector<ll>> matrix;
        typedef vector<ll> vi;

int main() {
    fast;
    test{

        ll n,k; cin>>n>>k;
        //cout<<n<<" "<<k<<" ";
        ll check = (k*(k+1))>>1;

        if(check > n){
            cout<<-1<<"\n"; continue;
        }


        ll sum=0,ans=1LL;
        if(k==1){
            //cout<<n<<" ";
            ans *= (n*n - n) % MOD;
            ans %= MOD;
        }
        else if(k==2){
            ll a = n/2 + n%2;
            ll b = n/2;
            if(a==b) a+=1,b-=1;

            //cout<<b<<" "<<a<<" ";
            ans *= (a*a - a) % MOD;
            ans %= MOD;
            ans *= (b*b - b) % MOD;
            ans %= MOD;
        }
        else{
            vector<ll> num;
            num.push_back(0);
            ll val = n/k, rem = n%k;
            for(int i=1;i<=k;i++) num.push_back(val);
            for(int i=k/2,j=1;i>=1;i--,j++)
                num[i]-=j,num[k-i+1]+=j;
        
        
        
            if(num[1]==0 || num[1]==1){
                int i=1;
                while(rem-- >0)  num[i++]+=1;
                if(num[i] == num[i-1])
                        num[k]+=1,num[i-1]-=1;
            }
            else{
                int i=k;
                while(rem-- >0) num[i--]+=1;
            }

            for(size_t i=1;i< num.size();i++){
                //cout<<num[i]<<" ";
                sum+=num[i];
                ll temp = ((num[i]*num[i])-num[i]);
                ans = (ans*temp);
                if(ans==0)
                    break;
            }
        }
        cout<<ans<<"\n";
        //cout<<":"<<sum<< " "<<ans<<"\n";            
    }
    return 0;
}
