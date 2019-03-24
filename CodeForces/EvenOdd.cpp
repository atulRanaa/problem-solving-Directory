#include<bits/stdc++.h>
using namespace std;

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

    long long int n,k;
    cin>>n>>k;

    long long int ans;
    long long int o = n- n/2;

    if(k <= o) ans=1+(k-1)*2;
    else ans=2+(k-o-1)*2;
    cout<<ans;  

	return 0;
}
