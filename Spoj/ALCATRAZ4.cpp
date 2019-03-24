
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
        #define MAXN 1000001


int main(){
    ll n,m;
    ll t=0;
    while(true){
        cin >>n>>m;

        if(n==0 && m==0) break;
        t++;
        char ch[100][100];
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >>ch[i][j];

        vector< pair<int,int> > ar[26];
        

        int cnt[100][100];
        memset(cnt, 0, sizeof(cnt));
        for(int i=0;i<n;i++) for(int j=0;j<m;j++){
            ar[ ch[i][j]-'A' ].push_back({i,j});

            if(ch[i][j]=='A') cnt[i][j]=1;
        }



        for(int i=0;i<26;i++){
            if(ar[i].size() == 0) break;

            bool f=false;
            for(pair<int,int> e: ar[i]){
                int x=e.F,y=e.S;

                if(x-1>=0 && (ch[x-1][y]-'A')==i+1 && cnt[x][y]) cnt[x-1][y]= cnt[x][y]+1,f=true;
                if(x+1<n && (ch[x+1][y]-'A')==i+1 && cnt[x][y])  cnt[x+1][y]= cnt[x][y]+1,f=true;
                if(y-1>=0 && (ch[x][y-1]-'A')==i+1 && cnt[x][y]) cnt[x][y-1]= cnt[x][y]+1,f=true;
                if(y+1<m && (ch[x][y+1]-'A')==i+1 && cnt[x][y])  cnt[x][y+1]= cnt[x][y]+1,f=true;
                if(x-1>=0 && y-1>=0 && (ch[x-1][y-1]-'A')==i+1 && cnt[x][y]) cnt[x-1][y-1]= cnt[x][y]+1,f=true;
                if(x+1<n && y+1<m && (ch[x+1][y+1]-'A')==i+1 && cnt[x][y])   cnt[x+1][y+1]= cnt[x][y]+1,f=true;
                if(x-1>=0 && y+1<m && (ch[x-1][y+1]-'A')==i+1 && cnt[x][y])  cnt[x-1][y+1]= cnt[x][y]+1,f=true;
                if(x+1<n && y-1>=0 && (ch[x+1][y-1]-'A')==i+1 && cnt[x][y])  cnt[x+1][y-1]= cnt[x][y]+1,f=true;

            }

            // for(int i=0;i<n;i++){ for(int j=0;j<m;j++) cout<<cnt[i][j]<<" "; cout<<"\n"; }
            // cout<<"\n";

            if(!f) break;
        }




        int ans=0;
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) ans=max(ans,cnt[i][j]);
        cout<<"Case "<<t<<": "<<ans<<"\n";
    }
    return 0;
}