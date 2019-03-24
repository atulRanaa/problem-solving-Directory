#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("PrjectEulerP_18.txt", "r", stdin);
	int ar[15][15]={0};
	for(int i=0;i<15;i++){
		for(int j=0;j<=i;j++) cin>>ar[i][j];
	}
	for(int i=0;i<15;i++){
		for(int j=0;j<15;j++) cout<<ar[i][j]<<" ";
		cout<<endl;
	}
	for(int i = 13;i >= 0 ;i--){
		for(int j=13;j>=0;j--){
			ar[i][j] += max(ar[i+1][j],ar[i+1][j+1]);
		}
	}
	for(int i=0;i<15;i++){
		for(int j=0;j<15;j++) cout<<ar[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
