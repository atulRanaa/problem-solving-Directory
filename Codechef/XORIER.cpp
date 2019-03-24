#include <bits/stdc++.h>
using namespace std;

#define N 100005
#define ll long long


//bool p[N];
//vector<int> P;
// void seive(){
//     memset(p, true, sizeof p);
//     p[0]=0;
//     p[1]=0;
//     for(int i=2;i < N;i++){
//         if(p[i]){
//             for(int j=i+i;j<N;j+=i) p[j]=0;
//         }
//     }
//     for(int i=3;i < N;i++)
//         if(p[i]) P.push_back(i);
// }

int ar[N];
int main(){
    //seive();
    //cout<< P.size() <<"\n";
    int t; scanf("%d",&t);
    ll n;
    while(t-- > 0){
        scanf("%lld",&n);
        for(int i=0;i<n;i++) scanf("%d",ar+i);

        //sort(ar,ar+n);

        ll O=0,E=0;
        for(int i=0;i<n;i++)
            if(ar[i]&1) O++;

        E = n-O;
        unordered_map<int ,int> S;
        ll x=0;
        for(int i=0;i<n;i++){
            int j = (ar[i]^2);
            if(S.find( j ) != S.end()) x += S[j];
            
            S[ar[i]]++;
        }
        S.clear();
        ll y=0;
        for(int i=0;i<n;i++){
            int j = (ar[i]^0);
            if(S.find( j ) != S.end()) y += S[j];
            
            S[ar[i]]++;
        }
        //cout<< O <<" "<<E <<" "<<x<<"\n";
        ll ans = ((n*(n-1))/2) - (O*E) - x - y;
        //cout << (O*(O-1))/2 + (E*(E-1))/2 - x - y<<" ";
        printf("%lld\n", ans);
    }
    return 0;
}