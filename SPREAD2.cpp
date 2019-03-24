// codechef
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const int N = 1e5+5;
        #define all(x) x.begin(),x.end()
        #define MOD 1000000007
        #define pii pair<int,int>
        #define pis pair<int,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test ll cse;cin>>cse;for(ll i=1;i<=cse;i++)
        #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
        #define PI 3.14159265

int main(){
        fast;
        ll n;
        ll ar[N];
        test{
                scanf("%lld",&n);
                for(int i=0;i<n;i++) scanf("%lld",ar+i);
                ll day=0,num=ar[0],ind=1;
                
                if(n==1) day=0;
                else if(ar[0] >= n-1) day=1;
                else if(n==2) day=1;
                else{   
                       do{
                                
                                day+=1;
                                ll t=0,l = min(ind+num, n);
                                for(int i=ind;i<l;i++)
                                        t += ar[i];
                                ind += num;
                                num += t;

                                //cout<<num<<" "<<ind<<"\n";
                        } while(ind < n);
                }
                printf("%lld\n",day);
        }
        return 0;
}