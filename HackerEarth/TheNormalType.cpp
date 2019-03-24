#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    unordered_map<int,int>m;
    vector<ll>v;
    
    ll n,x,k,t=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
        m[x]++;
    }
    k=m.size();
    m.clear();
    
    ll l=0,d=0,r=0;
    for(l=0;l<n;l++)
    {
    	while(d<k&&r<n)
    	{
    		++m[v[r]];
    		if(m[v[r]]==1)
    			d++;
    		r++;
    	}
    	if(d==k)
    		t+=(n-r+1);
    		
    	--m[v[l]];
    	
    	if(m[v[l]]==0)--d;
    }
    cout<<t;
	return 0;
}