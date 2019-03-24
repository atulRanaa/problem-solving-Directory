
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
        #define test ll cse;cin>>cse;for(ll I=1;I<=cse;I++)
        #define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
        #define PI 3.14159265
        #define MAXN 1000001


int main(){
    fast;
    ll n;

    ll cnt[64]={0};
    cnt[0]=1;
    for(int i=1;i<50;i++) cnt[i]=cnt[i-1]*2;
    cnt[0]=0;
    for(int i=1;i<50;i++) cnt[i] +=cnt[i-1];


    //for(int i=0;i<50;i++) cout<<cnt[i]<<" "; cout<<"\n";
    test{
        cin >>n;
        int i;
        for(i=0;i<50;i++) if(n<=cnt[i]) break;

        n -= cnt[i-1];
        n -= 1;
        string bin = bitset<64>(n).to_string();

        for(int j=64-i;j<64;j++){
            if(bin[j]=='0') cout<<5; else cout<<6;
        }

        cout<<"\n";
    }
    return 0;
}