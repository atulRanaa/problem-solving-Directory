#include<bits/stdc++.h>
using namespace std;

int primeFact(int n,int ar[]){
    int len=0;
	for(int i=2; i*i <= n;i++){
		  if(n%i ==0) ar[len++]=i;
	      while(n%i == 0){
	            n /= i;
	      }
	}
	if(n != 1) ar[len++]=n;
	
	return len;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t; cin>>t;
	while(t--){
		int n; cin>>n;
    	int ar[1234]={0};
    
    	int len = primeFact(n,ar);
    	for(int i=0; i<len ;i++){
    		n = (n/ar[i])*(ar[i]-1);
    	}
    	cout<<n<<endl;
	}
	
	return 0;
}