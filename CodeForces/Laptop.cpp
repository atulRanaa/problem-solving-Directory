#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    long int n;
    cin>>n;
std::vector< pair< long int, long int > > v;

long int i,p,q;
    for (i = 0; i < n; ++i)
        {
        	cin>>p>>q;
        	v.push_back(make_pair(p,q));
        }    
bool flag = true; 
    sort(v.begin(),v.end());
    long int l = v.size();
    for (i=1;i<l;++i)
    {
    	if(v[i].first > v[i-1].first){
    		if(v[i].second < v[i-1].second){
    		     flag = false;
    		     cout<<"Happy Alex";

    		     break;
    	    }
    	}
    }
    if(flag) cout<<"Poor Alex";
return 0;
}