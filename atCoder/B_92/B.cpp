#include<iostream>
#include<map>
#include<algorithm>
#include<queue>

using namespace std;
int main(){
	int n; cin>>n;
	int d,x; cin>>d>>x;
	int ar[n];
	for(int i=0;i<n;i++) cin>>ar[i];

	int sum[1000]={0};
	for(int i=0;i<n;i++){
		int temp =1;
		while(temp <= d){
			sum[temp] += 1;
			temp += ar[i];
		}
	}
	for(int i=2;i<=d;i++) sum[i] += sum[i-1];
	cout<<x+sum[d];
	return 0;	
}