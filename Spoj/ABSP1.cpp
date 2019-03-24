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
	int t,n,m; cin>>t;
	while(t--){
		cin>>n;
		long long int ar[n];
		for(int i=0;i<n;i++) cin>>ar[i];
		sort(ar,ar+n);
		long long int sum =0;
		for(int i=0;i<n;i++)
			sum += (i*ar[i] - (n-1-i)*ar[i]);
		cout<<sum<<endl;
	}

	return 0;
}