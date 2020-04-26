#include<iostream>
#include<map>
#include<algorithm>
#include<queue>
#include<math.h>
using namespace std;
int main(){
	int n; cin>>n;
	long long int ar[n+5];
	for(int i=0;i<n;i++) cin>>ar[i];
	
	long long sum = abs(ar[0]-0);
	for(int i=1;i<n;i++){
		sum += abs(ar[i]-ar[i-1]);
	}
	//cout<<sum<<"\n";
	for(int i=0;i<n;i++){
		if(i==0){
			cout<<sum-abs(ar[0]-0)-abs(ar[1]-ar[0])+abs(ar[1]-0)+abs(ar[n-1]);
		}
		else if(i==n-1){
			cout<<sum-abs(ar[i]-ar[i-1])+abs(ar[i-1]);
		}
		else 
			cout<<sum-abs(ar[i]-ar[i-1])-abs(ar[i+1]-ar[i])+abs(ar[i+1]-ar[i-1])+abs(ar[n-1]);

		cout<<"\n";
	}
	return 0;	
}