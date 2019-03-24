
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
        #define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
        #define PI 3.14159265
        #define MAXN 10000001


int main(){
    
    fast;
    test{
        int n; cin >>n;
        int ar[26];
        for(int i=0;i<26;i++) ar[i]=1;

        while(n-- > 0){
            string s;   cin >> s;
            int h[26]={0};
            for(char ch : s) h[ch-'a']=1;
            for(int i=0;i<26;i++) ar[i]=ar[i]&h[i];
        }
        int ans = 0;
        for(int i=0;i<26;i++) if(ar[i]) ans++;
        cout<< ans <<"\n";
    }
    return 0;
}