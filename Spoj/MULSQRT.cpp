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
 
bool comp(pair< float,pair<int,int> > a,pair<float,pair<int,int> > b){
        return  (a.F > b.F);
}
 
int main(){
        
        int m,n;
        int t;scanf("%d",&t);
        while(t-- > 0){
                scanf("%d",&m);
                scanf("%d",&n);

                
                float val;
                int ind;
                int sz = m*n;
                vector< pair<float, pair<int,int> > > ar[sz+1];
                for(int i=1;i<=m;i++) for(int j=1;j<=n;j++){
                        scanf("%f",&val);

                        ind = (val/10.0) * sz;
                        ar[ind].push_back( {val,{i,j}});
                }
                for(int i=0;i<=10;i++)
                        stable_sort(ar[i].begin(),ar[i].end(),comp);
                

                for(int i=sz;i>=0;i--){
                        int l = ar[i].size();
                        for(int j=0;j<l;j++){
                                printf("%d,%d ",ar[i][j].S.F,ar[i][j].S.S);
                        }
                }
                printf("\n");
        }
        return 0;
} 