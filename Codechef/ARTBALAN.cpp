
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
        string s; cin >> s;
        int cnt[26]={0};

        for(char ch:s) cnt[ ch-'A']++;
        int l = s.length();

        int op=l;
        for(int i= min(l,26);i >= 1;i--){
            if(l%i == 0){


                int lvl = l/i, ops=0;
                vector< int > dist;
                for(int j=0;j<26;j++) dist.push_back(lvl-cnt[j]);


                sort(all(dist));
                int neg=0,pos=0;
                for(int j=0;j<i;j++){
                    if(dist[j] >=0) pos += dist[j];
                    else            neg += dist[j];
                }

                ops = abs(pos+neg)+min(pos, abs(neg));
                op = min(op,ops);

                //for(auto e:dist) cout<<e<<" ";cout<<" : " << pos << " " << neg << " "<<ops<<"\n";
            }
        }
        cout << op <<"\n";
        //cout<<s <<" ANS "<< op <<"\n";
    }   
    return 0;
}