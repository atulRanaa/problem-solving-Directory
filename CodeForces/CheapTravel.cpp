#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    long int n,m,a,b;
    cin>>n>>m>>a>>b;
    long int i=0;
    long int ans;
    
    long int ar[3];
    ar[0]=(n/m)*b + (n%m)*a;
    ar[1]=n*a;
    ar[2]=(n/m + 1)*b;
  	
  	sort(ar,ar+3);
    cout<<ar[0];
  	
	return 0;
}