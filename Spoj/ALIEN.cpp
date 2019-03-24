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
	
	int t,n; cin>>t;
	long long int alien;
	while(t--){
		cin>>n>>alien;
		long long int ar[n];
		for(int i=0;i<n;i++) cin>>ar[i];

		int i =0,j=0;
		long long int sum = 0,range = 0,ans = 0;
		while(i < n){
			while(i <n && sum+ar[i] <= alien){
				sum += ar[i];
				i++;
			}
			if(i-j > range) {
				range = (i-j);
				ans = sum;
			}
			if(i-j == range && ans > sum) ans = sum;
			if(j < n) sum -= ar[j];
			j++;
		}

		cout<<ans<<" "<<range<<endl;
	}

	return 0;
}