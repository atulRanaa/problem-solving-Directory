#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;

while(t--){
    long int n,x,temp;
    cin>>n>>x;
    vector < long int > v;
    for (int i = 0; i < n; ++i)
    {
        cin>>temp;
        v.push_back(temp);
    }
    for (int i = 1; i < n; ++i)
    {
        v[i]+=v[i-1];
    }
    bool f = false;
    if( find(v.begin() , v.end(), x) != v.end()) f = true;
    else {
        unordered_set< long long int > c;
        for (long long int value:v)
        { 
            if( c.find(value)!= c.end()) f = true;
            c.insert( x+value );
        }        
    }
    
    if(f) cout<<"YES";
    else cout<<"NO";

    cout<<"\n";
}
return 0;
}