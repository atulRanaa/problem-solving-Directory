#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL); 

/*
sys.stdin=open('input.txt','r')
sys.stdout=open('output.txt','w')
*/
   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t; cin>>t;
	int n,k;
	int ar[100010];
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++) cin>>ar[i];

		long long int temp;
		long long int fS = -1234560, wS = -1234560 ,S = -1234560;
		temp = 0;
		for(int i=n-1;i>=0;i--){
			temp += ar[i];
			if(temp > wS) wS = temp;
		}
		temp = 0;
		for(int i=0;i<n;i++){
			temp += ar[i];
			if(temp > S) S = temp;
			if(temp < 0) temp = 0;
		}
		temp = 0;
		for(int i=0;i<n;i++){
			temp += ar[i];
			if(temp > fS) fS = temp;
		}
		if(k >= 2){
			S = max(S,wS+fS);
			S = max(S,wS+(k-2)*temp+fS);
		}
		cout<<S<<endl;
	}

	return 0;
}
