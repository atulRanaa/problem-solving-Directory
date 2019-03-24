#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
     long int n;
     cin>>n;
std::vector< long int > v;
     long int temp;
long long int sum=0;
     for (long int i = 0; i < n; ++i)
     {
     	cin>>temp;
     	if(temp&1) v.push_back(temp);
     	else sum+=temp;
     }
    if(v.size() & 1){
    	long int ind=min_element(v.begin() , v.end())-v.begin();
    	v[ ind ]=0;
    }

    for (long int i=0;i<v.size();i++)
    {
    	sum+=v[i];
    }

    cout<<sum;
return 0;
}