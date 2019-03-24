// spoj
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

bool p[N];
void seive(){
    memset(p, true, sizeof p);
    p[0]=p[1]=false;
    for(int i=2;i*i<N;i++){
        if(p[i])
            for(int j=i+i;j<N;j+=i) p[j]=false;
    }
}
bool combinations(int n){
    if(p[n]) return false;
    vector<int> dig;
    while(n > 0){
        dig.push_back(n%10); n/=10;
    }
    //for(int e: dig) cout<<e<<" "; cout<<"\n";
    int l=dig.size();
    int L=(1<<l);
    for(int i=0;i<L;i++){

        int num=0;
        for(int j=l-1;j>=0;j--){
            if(i&(1<<j))
                num = num*10+dig[j];
        }
        //cout<<num<<" ";
        if(p[num]) return false;
    }
    return true;
}
int cnt[N];
void pre(){
    memset(cnt, 0, sizeof cnt);
    for(int i=0;i<N;i++) cnt[i] = combinations(i)?(1):(0);
    //cout<< combinations(169);
    for(int i=1;i<N;i++) cnt[i]+=cnt[i-1];
}

int main(){
    int l,r;
    seive();
    pre();
    test{
        scanf("%d %d",&l,&r);
        if(l>r) swap(l,r);
        printf("%d\n", cnt[r]-cnt[l-1]);
    }
    return 0;
}