#include <bits/stdc++.h>
 
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define test ll t;scanf("%lld",&t);while(t-- > 0)

ll sol;
ll ar[100005];
struct trie
{
    ll num[2], next[2];
    trie()
    {
        num[0] = num[1] = 0;
        next[0] = next[1] = -1;
    }
};
 
vector<trie> v;
 
void add(ll x)
{
    ll vind = 0;
    for (ll i=31; i>=0; --i)
    {
        bool f = x & (1 << i);
        if (v[vind].next[f] == -1)
        {
            v[vind].next[f] = v.size();
            v.pb(trie());
        }
        v[vind].num[f]++;
        vind = v[vind].next[f];
    }
}
ll query(ll x, ll K)
{
    ll vind = 0;
    ll ret = 0;
    for (ll i=31; i>=0; --i)
    {
        if (vind == -1)
            break;
        bool kbit = K & (1 << i);
        bool xbit = x & (1 << i);
        bool xneg = 1-xbit;
        if (kbit)
        {
            ret += v[vind].num[xbit];
            vind = v[vind].next[xneg];
        }
        else
        {
            vind = v[vind].next[xbit];
        }
    }
    return ret;
}
void init()
{
    v.clear();
    sol = 0;
    v.pb(trie());
    add(0);
}
ll XorlessthanK(ll N,ll K){
    init();
        ll pref=0;
        for (ll i=0; i<N; ++i)
        {
            pref ^= ar[i];
            sol += query(pref, K);   add(pref);         
        }
    return sol;
}
int main()
{   
    ll N,K;
    test{
        cin>>N>>K;
        for(ll i=0;i<N;i++) scanf("%lld",ar+i);

        cout<< XorlessthanK(N,K) <<"\n";
    }
    return 0;
}