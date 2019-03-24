#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin>>n;

    long long int ans;

    if(n&1){
       ans = -1* (n+1)/2;
       
    }
    else{
       ans = n/2;
    }
   cout<<ans;
	return 0;
}
