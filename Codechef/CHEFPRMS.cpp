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
        #define test ll cse;scanf("%lld",&cse);for(ll i=1;i<=cse;i++)
        #define PI 3.14159265

bool isprime(int n){
        if(n<=1) return false;
        if(n<=3) return true;
        if(n%2==0 || n%3==0)
                return false;
        for(int i=5;i*i <= n;i+=6)
                if(n%i==0 || n%(i+2)==0) return false;
        return true;
}
int main(){
        int n;
        
        vector<int> p;
        for(int i=1;i<=200;i++)
                if(isprime(i)) p.push_back(i);
        int _p = p.size();
        //cout<<_p<<" "; for(int e:p) cout<<e<<" "; cout<<"\n";

        vector<int> sp;
        for(int i=0;i < _p;i++){
                for(int j=i+1; j< _p;j++){
                        if(p[i]*p[j] <= 200) sp.push_back(p[i]*p[j]);
                        else
                                break;
                }
        }
        int _semi = sp.size();
        sort(all(sp));
        //cout<<_semi<<" ";for(int e:sp) cout<<e<<" "; cout<<"\n";
        
        set<int> sum_semi;
        for(int i=0;i < _semi;i++){
                for(int j=i; j< _semi;j++){
                        if(sp[i]+sp[j] <= 200) sum_semi.insert(sp[i]+sp[j]);
                        else
                                break;
                }
        }
        //cout<<sum_semi.size()<<" "; for(int e: sum_semi) cout<<e<<" "; cout<<"\n";
        test{
                scanf("%d",&n);
                if(sum_semi.find(n) == sum_semi.end())  printf("NO\n");
                else                                    printf("YES\n");
        }
        return 0;
}