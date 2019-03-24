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
        #define MAXN 1300005
        #define pb      push_back
        #define mp      make_pair
 
int main(){
        char s[100005];
        while( scanf("%s",s) > 0){
                int h[26]={0};
                int l = strlen(s);
                for(int i=0;i<l;i++) h[ s[i]-'a']++;

                int cnt=0;
                for(int i=0;i<26;i++) if(h[i]&1) cnt++;


                if(cnt<=1) printf("1\n"); else printf("-1\n");
        }
        return 0;
} 